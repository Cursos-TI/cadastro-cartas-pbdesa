#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
// --- Declaração das Variáveis para a Carta 1 ---
    // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4]; // Ex: "A01" + caractere nulo '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração das Variáveis para a Carta 2 ---
    // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4]; // Ex: "B02" + caractere nulo '\0'
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Início da Interação com o Usuário ---
    printf("--- Cadastro de Cartas Super Trunfo ---\n\n");

    // --- Leitura dos Dados da Carta 1 ---
    printf("--- Inserindo dados da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para consumir quebras de linha pendentes

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n"); // Adiciona uma linha em branco para separar os blocos

    // --- Leitura dos Dados da Carta 2 ---
    printf("--- Inserindo dados da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2); // Espaço antes de %c para consumir quebras de linha pendentes

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n\n"); // Adiciona duas linhas em branco para separar a entrada da saída

    // --- Exibição dos Dados Cadastrados ---
    printf("--- Dados das Cartas Cadastradas ---\n\n");

    // Exibe as informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // Formata para exibir 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1); // Formata para exibir 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n"); // Adiciona uma linha em branco

    // Exibe as informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2); // Formata para exibir 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib2); // Formata para exibir 2 casas decimais
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos2);

    // Pausa o programa no Windows para que o usuário possa ver a saída
    // Em outros sistemas operacionais, esta linha pode ser removida.
    system("pause");

    return 0; // Indica que o programa terminou com sucesso

return 0;
} 
