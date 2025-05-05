#include <stdio.h>

int main (){
    float qtatual, qtmax, qtmin, qtmedia;

    printf("Quantidade atual: ");
    scanf("%f",&qtatual);

    printf("Quantidade Maxima: ");
    scanf("%f",&qtmax);    

    printf("Quantidade Minima: ");
    scanf("%f",&qtmin);

    qtmedia = (qtmax + qtmin) / 2;

    if (qtatual>=qtmedia)
    {
        printf("Nao precisa efetuar compra para o estoque");
    }
    
    if (qtatual<qtmedia)
    {
        printf("Efetuar compra para o estoque");
    }
    


}