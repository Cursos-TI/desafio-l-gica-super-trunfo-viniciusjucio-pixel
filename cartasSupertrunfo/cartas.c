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

    printf("Indira os dados da carta1.\n");
    printf("Estado de A á H:\n");
    scanf("%c", &estado1);
    printf("Código da carta1:\n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade:\n");
    scanf("%s", &nomeCidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área em km^:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &NumPontosturisticos1);



    
    return 0;

}