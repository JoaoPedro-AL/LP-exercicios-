#include <stdio.h>

int main (){
    int lados;
    float area, calculo;

    printf("\nQuantos lados tem o seu poligono?: ");
    scanf("%i", &lados);

    printf("\nQual o tamanho do lado em cm?: ");
    scanf("%f", &area);

    if (lados == 3)
    {
        calculo = 3 * area;
        printf("\nTriangulo de perimetro de %.2fcm", calculo);
    }
    else if (lados == 4)
    {
        calculo = area * area;
        printf("\nQuadrado de area de %.2fcm", calculo);
    }
    else if (lados == 5)
    {
        printf("\nPentagono");
    }
    
    

}