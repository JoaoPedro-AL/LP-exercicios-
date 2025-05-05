#include <stdio.h>

int main (){

    float num1, num2;

    printf("Valor do primeiro numero: ");
    scanf("%f", &num1);

    printf("Valor do segundo numero: ");
    scanf("%f", &num2);

    if (num1 == num2)
    {
        printf("\nNumeros Iguais");
    }
    else if (num1 > num2)
    {
        printf("\nO %.2f e maior", num1);
    }
    else
    {
        printf("\nO %2.f e maior", num2);
    }



}