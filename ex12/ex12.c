#include <stdio.h>

int main (){
    float salario, reajuste, total;

    printf("Salario atual: ");
    scanf("%f",&salario);

    printf("Quantos %% de reajuste: ");
    scanf("%f",&reajuste);

    total = salario + reajuste;

    printf("\nSeu novo salario sera de: R$%.2f", total);


}