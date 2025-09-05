#include <stdio.h>

int main(){

    char estado, nomeCidade[50];
    char CodigoCarta[04];
    int populacao, PontosTuristicos;
    float Area, PIB;

    printf("CARTA 1\n");
    printf("DIGITE O ESTADO:\n");
    scanf("%s", &estado);
    printf("DIGITE O CÓDIGO DA CARTA:\n");
    scanf("%s",&CodigoCarta);
    printf("DIGITE O NOME DA CIDADE:\n");
    scanf("%d",&nomeCidade);
    printf("DIGITE A POPULÇÃO:\n");
    scanf(&populacao);
    printf("DIGITE A ÁREA:\n");
    scanf("%f",&Area);
    printf("DIGITE O PIB:\n");
    scanf("%f",&PIB);
    printf("DIGITE O NÚMERO DE PONTOS TURÍSTICOS:\n");
    scanf("%d",&PontosTuristicos);

    return 0;

}