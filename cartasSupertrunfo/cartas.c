#include <stdio.h>

int main() {
    //Declaração de variaveis carta1.

    char estado1;
    char codigo1[04];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPontosturisticos1;
    float densidade1, pibPercapita1;

    //Declaração variaveis carta2.
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosturisticos2;
    float densidade2, pibPercapita2;

    //Entrada de dados carta1.

    printf("\nInsira os dados da carta1:\n");
    printf("Estado de A á H:");
    scanf(" %c", &estado1);
    printf("Código da carta1:");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade:");
    scanf(" %s", &nomeCidade1);
    printf("População:");
    scanf(" %d", &populacao1);
    printf("Área em km^:");
    scanf(" %f", &area1);
    printf("PIB:");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos:");
    scanf(" %d", &numPontosturisticos1);

    //Entrada de dados carta2.
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado de A á H:");
    scanf(" %c", &estado2);
    printf("Código da carta:");
    scanf(" %s", &codigo2);
    printf("Nome da cidade:");
    scanf(" %s", &nomeCidade2);
    printf("População:");
    scanf(" %d", &populacao2);
    printf("Área em km^:");
    scanf(" %f", &area2);
    printf("PIB:");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos:");
    scanf(" %d", &numPontosturisticos2);

    //Calculos.
    densidade1 = populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;

    //Dados na tela.
    printf("\n--Dados da carta 1--\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km^: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB percapita: %.2f\n", pibPercapita1);

    printf("\n--Dados da carta 2--\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB percapita: %.2f\n", pibPercapita2);

    return 0;

}