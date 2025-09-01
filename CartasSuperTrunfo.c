#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cartas
  
  // Carta 1
  char Estado1[50];       // Escolha uma letra de A a H representando um dos oito Estados brasileiros
  char Codigo1[10];       // Para o código use a letra escolhida seguida de um número de 01 a 04 (ex. A01, B01,...)
  char NomeCidade1[50];   // O nome da cidade
  int Populacao1;         // A População da cidade
  float Area1;            // A Área da cidade em km²
  float PIB1;             // O Produto Interno Bruto da cidade em bilhões de R$
  int PontosTuristicos1;  // A quantidade de pontos turísticos da cidade

  // Carta 2
  char Estado2[50];       // Escolha uma letra de A a H representando
  char Codigo2[10];       // Para o código use a letra escolhida seguida de um número de 01 a 04 (ex. A01, B01,...)
  char NomeCidade2[50];   // O nome da cidade
  int Populacao2;         // A População da cidade
  float Area2;            // A Área da cidade em km²
  float PIB2;             // O Produto Interno Bruto da cidade em bilhões de R$
  int PontosTuristicos2;  // A quantidade de pontos turísticos da cidade

  // Área para entrada de dados
  printf("Cadastro da Carta 1\n");

  printf("Digite o Estado (A-H): ");
  scanf("%s", Estado1);

  printf("Digite o Código (ex. A01): ");
  scanf("%s", Codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", NomeCidade1); // Lê uma linha inteira incluindo espaços

  printf("Digite a População: ");
  scanf("%d", &Populacao1);

  printf("Digite a Área (km²): ");
  scanf("%f", &Area1);

  printf("Digite o PIB (bilhões de R$): ");
  scanf("%f", &PIB1);

  printf("Digite a Quantidade de Pontos Turísticos: ");
  scanf("%d", &PontosTuristicos1);

  printf("\nCadastro da Carta 2\n");

  printf("Digite o Estado (A-H): ");
  scanf("%s", Estado2);

  printf("Digite o Código (ex. A01): ");
  scanf("%s", Codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", NomeCidade2); // Lê uma linha inteira incluindo espaços

  printf("Digite a População: ");
  scanf("%d", &Populacao2);

  printf("Digite a Área (km²): ");
  scanf("%f", &Area2);

  printf("Digite o PIB (bilhões de R$): ");
  scanf("%f", &PIB2);

  printf("Digite a Quantidade de Pontos Turísticos: ");
  scanf("%d", &PontosTuristicos2);
  
  // Área para exibição dos dados das cartas

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %s\n", Estado1);
  printf("Código: %s\n", Codigo1);
  printf("Nome da Cidade: %s\n", NomeCidade1);
  printf("População: %d\n", Populacao1);
  printf("Área: %.2f km²\n", Area1);
  printf("PIB: %.2f bilhões de R$\n", PIB1);
  printf("Pontos Turísticos: %d\n", PontosTuristicos1);
  printf("----------------\n");

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %s\n", Estado2);
  printf("Código: %s\n", Codigo2);
  printf("Nome da Cidade: %s\n", NomeCidade2);
  printf("População: %d\n", Populacao2);
  printf("Área: %.2f km²\n", Area2);
  printf("PIB: %.2f bilhões de R$\n", PIB2);
  printf("Pontos Turísticos: %d\n", PontosTuristicos2);
  printf("----------------\n");
  
return 0;
} 
