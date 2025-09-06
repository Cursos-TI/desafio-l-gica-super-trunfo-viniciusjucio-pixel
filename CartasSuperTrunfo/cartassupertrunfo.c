#include <stdio.h>

int main(){
    // Declaração de variaveis carta 1

    char estado1, nomeCidade1[50];
    char CodigoCarta1[04];
    int populacao1, PontosTuristicos1;
    float Area1, PIB1;
    // Declaração de variaveis carta 2
    char estado2, nomecidade2;
    char codigocarta[04];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Entrada de dados cartas 1

    printf("INSIRA OS DADOS DA CARTA 1\n");
    printf("DIGITE O ESTADO DE A á H:\n");
    scanf("%c", &estado1);
    printf("DIGITE O CÓDIGO DA CARTA:\n");
    scanf("%s",&CodigoCarta1);
    printf("DIGITE O NOME DA CIDADE:\n");
    scanf("%d",&nomeCidade1);
    printf("DIGITE A POPULAÇÃO:\n");
    scanf("%d",&populacao1);
    printf("DIGITE A ÁREA:\n");
    scanf("%f",&Area1);
    printf("DIGITE O PIB:\n");
    scanf("%f",&PIB1);
    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS:\n");
    scanf("%d",&PontosTuristicos1);


}