#include<stdio.h>

int main (){
    float nota1, nota2, mediasimples;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    mediasimples = (nota1+nota2)/2;

    if (mediasimples<6)
    {
        printf("\nAluno reprovado");
        printf("\nA media foi de %.2f", mediasimples);
    }
    
    if (mediasimples>=6)
    {
        printf("\nAluno aprovado");
        printf("\nA media foi de %.2f", mediasimples);
    }
    



}