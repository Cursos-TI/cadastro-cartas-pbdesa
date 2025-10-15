#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
   // Área para definição das variáveis para armazenar as propriedades das cidades
   // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float percapita1;

   // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4]; 
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float percapita2;

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
    scanf("%d", &pontosturisticos1);
    printf("\n"); 
    
   // --- Cálculos da densidade populacional e PIB per capita da Carta 1 ---
    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) (pib1 * 1000000000) / populacao1;

   // --- Leitura dos Dados da Carta 2 ---
    printf("Carta 2 \n");

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
    scanf("%d", &pontosturisticos2);
    printf("\n"); 

   // --- Cálculos da densidade populacional e PIB per capita da Carta 2 ---
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) (pib2 * 1000000000) / populacao2;

   // Área para exibição dos dados da cidade
   // Exibe as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("\n"); 

   // Exibe as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2); 
    printf("Numero de Pontos Turísticos: %d\n\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
   
return 0;
} 
