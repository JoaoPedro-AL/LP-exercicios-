#include <stdio.h>

int main (){
    float PI, RAIO, AREA;

    PI = 3.14159265359;

    printf("Raio: ");
    scanf("%f",&RAIO);

    AREA = PI*RAIO*RAIO;

    printf("\nArea do circulo: %.2f", AREA);



}