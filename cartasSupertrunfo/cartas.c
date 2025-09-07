#include <stdio.h>

int main() {
    //Declaração de variaveis carta1.

    char estado1;
    char codigo1[04];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int NumPontosturisticos1;

    //Declaração variaveis carta2.
    char estado2;
    char codigo2[04];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosturisticos2;

    //Entrada de dados carta1.

    printf("Insira os dados da carta1.\n");
    printf("Estado de A á H:");
    scanf("%c", &estado1);
    printf("Código da carta1:");
    scanf("%s", &codigo1);
    printf("Nome da Cidade:");
    scanf("%s", &nomeCidade1);
    printf("População:");
    scanf("%d", &populacao1);
    printf("Área em km^:");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:");
    scanf("%d", &NumPontosturisticos1);

    //Entrada de dados carta2.
    printf("Digite os dados da carta 2:\n");
    printf("Estado:");
    scanf("%c", &estado2);
    printf("Código da carta:");
    scanf("%s", &codigo2);
    printf("Nome da cidade:");
    scanf("%s", &nomeCidade2);
    printf("População:");
    scanf("%d", &populacao2);
    printf("Área em km^:");
    scanf("%f", &area2);
    printf("PIB:");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:");
    scanf("%d", &numPontosturisticos2);

    //Dados na tela.
    printf("Dados da carta 1.");
    printf("Estado: %c", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da cidade: %s", nomeCidade1);
    printf("População: %d", populacao1);
    printf("Área em km^: %f", area1);
    printf("PIB: %f", pib1);
    printf("Número de Pontos Turísticos: %d", NumPontosturisticos1);



    
    return 0;

}