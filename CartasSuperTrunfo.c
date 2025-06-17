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
 
    // ==== Declaração de variáveis para a Carta 2 ====

    char estado2;

    char codigo2[4];

    char nomeCidade2[50];

    int populacao2;

    float area2;

    float pib2;

    int pontosTuristicos2;
 
    // ==== Entrada de dados da Carta 1 ====

    printf("========= Cadastro da Carta 1 =========\n");
 
    printf("Informe o estado (A-H): ");

    scanf(" %c", &estado1);

    getchar(); // limpa o '\n'
 
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

    getchar(); // limpa o '\n' restante
 
    printf("\n");
 
    // ==== Entrada de dados da Carta 2 ====

    printf("========= Cadastro da Carta 2 =========\n");
 
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
 
    printf("\n");
 
    // ==== Exibição dos dados da Carta 1 ====

    printf("========= Dados da Carta 1 =========\n");

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
 
    printf("\n");
 
    // ==== Exibição dos dados da Carta 2 ====

    printf("========= Dados da Carta 2 =========\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
 
    return 0;

}

 
