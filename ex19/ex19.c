#include<stdio.h>

int main (){
    float comprimento, largura, altura, area;

    printf("Comprimento em metros: ");
    scanf("%f",&comprimento);

    printf("Largura em metros: ");
    scanf("%f",&largura);

    printf("Altura em metros: ");
    scanf("%f",&altura);

    area = (2*altura* largura)+(2*comprimento* altura);

    printf("Precisara de %.2f caixa de azulejo", area/1.5);



}