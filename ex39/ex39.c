#include <stdio.h>

int main () {
    float num1, num2, num3;

    printf("Primeiro Numero: ");
    scanf("%f", &num1);

    printf("Segundo Numero: ");
    scanf("%f", &num2);

    printf("Terceiro Numero: ");
    scanf("%f", &num3);

 if (num1 < (num2 + num3) && num2 < (num1 + num3) && num3 < (num1 + num2))
 {
        printf("Triangulo");
 }

 else 
 {
    printf("Não triangulo");
 }
}