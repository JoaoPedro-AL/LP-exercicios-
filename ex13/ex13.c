#include <stdio.h>

int main (){
    float cfabrica, distribuidor, impostos;

    printf("Custo de fabrica: ");
    scanf("%f",&cfabrica);

    distribuidor = cfabrica*0.28;

    impostos = cfabrica*0.45;

    printf("O Valor final do carro sera: %.2f", cfabrica+(distribuidor+impostos));


}