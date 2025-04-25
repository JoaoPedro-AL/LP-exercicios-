#include <stdio.h>

int main (){
    float metros, centimetros;

    printf("Metros: ");
    scanf("%f",&metros);

    centimetros = metros*1000;
    
    printf("Centimetros: %.2f",centimetros);


}