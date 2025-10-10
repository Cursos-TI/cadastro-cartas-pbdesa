#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   // Área para definição das variáveis para armazenar as propriedades das cidades
   // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

   // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Área para entrada de dados
    // --- Leitura dos Dados da Carta 1 ---
    printf("Carta 1 \n");

    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite a letra do Estado + código 01 a 04 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n"); 

   // --- Leitura dos Dados da Carta 2 ---
    printf("Carta 1 \n");

    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite a letra do Estado + código 01 a 04 (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n"); 

   // Área para exibição dos dados da cidade
   // Exibe as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n"); 

   // Exibe as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2); // Formata para exibir 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Formata para exibir 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos2);
   
return 0;
} 
