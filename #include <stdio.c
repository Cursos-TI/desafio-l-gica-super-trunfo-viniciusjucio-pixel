#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, EstoqueMinimo = 100;

    printf ("Entre com a temperatura: \n");
    scanf ("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura está alta. \n");

    } else {
        printf("Temperatura está dentro dos parãmetros. \n");
    }

    if (umidade > 50){
        printf("Umidade elevada. \n");
    } else {
        printf("Umidade está dentro dos parãmetros.\n");
    }
    if (estoque < EstoqueMinimo){
        printf("Estoque abaixo do minimo. \n");
    } else{
        printf("Estoque normal. \n");    
    }


}