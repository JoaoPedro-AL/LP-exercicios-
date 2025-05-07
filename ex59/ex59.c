#include <stdio.h>

int main (){
    float a1, a2, a3;

    printf("Digite os 3 angulos:\n");
    scanf("%f %f %f", &a1, &a2, &a3);

    if (a1 == 90 || a2 == 90 || a3 == 90)
    {
        printf("Triangulo retangulo");
    }
    if (a1 > 90 || a2 > 90 || a3 > 90)
    {
        printf("Triangulo Obtuso");
    }
    if (a1 < 90 && a2 < 90 && a3 < 90)
    {
        printf("Triangulo acutangulo");
    }
    



}