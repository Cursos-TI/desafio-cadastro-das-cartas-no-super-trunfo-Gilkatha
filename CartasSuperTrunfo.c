#include <stdio.h>

int main() {
    // Declarando as variáveis para a Carta 1
    char estado1;
    char codigo1[4];    // O código é uma string de até 3 caracteres (ex: A01, B03)
    char cidade1[100];  // Nome da cidade (considerando um tamanho grande)
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Declarando as variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite as informacoes da Carta 1:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);  // Leitura do estado
    printf("Codigo da carta (ex: A01, B02): ");
    scanf("%s", codigo1);    // Leitura do código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Leitura do nome da cidade (com espaços)
    printf("Populacao (em habitantes): ");
    scanf("%d", &populacao1);  // Leitura da população
    printf("Area da cidade (em km²): ");
    scanf("%f", &area1);  // Leitura da área
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);  // Leitura do PIB
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);  // Leitura do número de pontos turísticos

    // Leitura dos dados da Carta 2
    printf("\nDigite as informacoes da Carta 2:\n");
    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);  // Leitura do estado
    printf("Codigo da carta (ex: A01, B02): ");
    scanf("%s", codigo2);    // Leitura do código da carta
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);  // Leitura do nome da cidade (com espaços)
    printf("Populacao (em habitantes): ");
    scanf("%d", &populacao2);  // Leitura da população
    printf("Area da cidade (em km²): ");
    scanf("%f", &area2);  // Leitura da área
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);  // Leitura do PIB
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);  // Leitura do número de pontos turísticos

    // Exibindo os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibindo os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
