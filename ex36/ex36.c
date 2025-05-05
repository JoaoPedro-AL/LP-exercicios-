#include <stdio.h>

int main (){
    float num1, num2, num3;

    printf("Primeiro Numero: ");
    scanf("%f",&num1);

    printf("Segundo Numero: ");
    scanf("%f",&num2);

    printf("Teceiro Numero: ");
    scanf("%f",&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\n%.2f o maior", num1);
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("\n%.2f o maior", num2);
    }

    else if (num3 > num1 && num3 > num2)
    {
        printf("\n%.2f o maior", num3);
    }
    
    
}