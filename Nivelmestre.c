#include <stdio.h>
 
int main() {

    // ==== Declaração de variáveis para a Carta 1 ====

    char estado1;

    char codigo1[4];

    char nomeCidade1[50];

    int populacao1;

    float area1;

    float pib1;

    int pontosTuristicos1;

    float densidade1, pibPerCapita1;

    int superPoder1 = 0;
 
    // ==== Declaração de variáveis para a Carta 2 ====

    char estado2;

    char codigo2[4];

    char nomeCidade2[50];

    int populacao2;

    float area2;

    float pib2;

    int pontosTuristicos2;

    float densidade2, pibPerCapita2;

    int superPoder2 = 0;
 
    // ==== Entrada de dados da Carta 1 ====

    printf("Cadastro da Carta 1\n");
 
    printf("Informe o estado (A-H): ");

    scanf(" %c", &estado1);

    getchar();
 
    printf("Informe o código da carta (ex: A01): ");

    scanf("%3s", codigo1);

    getchar();
 
    printf("Informe o nome da cidade: ");

    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
 
    printf("Informe a população: ");

    scanf("%d", &populacao1);
 
    printf("Informe a área (em km²): ");

    scanf("%f", &area1);
 
    printf("Informe o PIB (em bilhões de reais): ");

    scanf("%f", &pib1);
 
    printf("Informe o número de pontos turísticos: ");

    scanf("%d", &pontosTuristicos1);

    getchar();
 
    printf("\n");
 
    // ==== Entrada de dados da Carta 2 ====

    printf("Cadastro da Carta 2\n");
 
    printf("Informe o estado (A-H): ");

    scanf(" %c", &estado2);

    getchar();
 
    printf("Informe o código da carta (ex: B02): ");

    scanf("%3s", codigo2);

    getchar();
 
    printf("Informe o nome da cidade: ");

    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
 
    printf("Informe a população: ");

    scanf("%d", &populacao2);
 
    printf("Informe a área (em km²): ");

    scanf("%f", &area2);
 
    printf("Informe o PIB (em bilhões de reais): ");

    scanf("%f", &pib2);
 
    printf("Informe o número de pontos turísticos: ");

    scanf("%d", &pontosTuristicos2);
 
    // ==== Cálculos ====

    densidade1 = populacao1 / area1;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
 
    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
 
    // ==== Comparação para Super Poder ====

    if (pibPerCapita1 > pibPerCapita2) superPoder1++;

    else if (pibPerCapita2 > pibPerCapita1) superPoder2++;
 
    if (densidade1 > densidade2) superPoder1++;

    else if (densidade2 > densidade1) superPoder2++;
 
    if (pontosTuristicos1 > pontosTuristicos2) superPoder1++;

    else if (pontosTuristicos2 > pontosTuristicos1) superPoder2++;
 
    printf("\n");
 
    // ==== Exibição dos dados da Carta 1 ====

    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
 
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "VENCEDORA" : "PERDEDORA");
 
    printf("\n");
 
    // ==== Exibição dos dados da Carta 2 ====

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
 
    printf("Super Poder: %s\n", (superPoder2 > superPoder1) ? "VENCEDORA" : "PERDEDORA");
 
    return 0;

}

 
