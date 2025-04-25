#include <stdio.h>

int main (){
    float n1, n2, n3, notafinal;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f",&n2);

    printf("Nota 3: ");
    scanf("%f",&n3);

    notafinal = (n1*2+n2*3+n3*5)/10;

    printf("\nA nota final: %.2f", notafinal);



}