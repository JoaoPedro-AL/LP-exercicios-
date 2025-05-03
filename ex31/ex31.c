#include <stdio.h>

int main (){
    float altura, pesoideal;
    char  nome, sexo;

    printf("Digite seu nome: ");
    scanf("%s",&nome);

    printf("Qual o seu sexo?(M ou F): ");
    scanf("%s",&sexo);

    printf("Qual a sua altura?(Em metros): "); 
    scanf("%f",&altura);

    if (sexo == 'M')
    {
        pesoideal = (72.7 * altura) - 58;
        printf ("Seu peso ideal é %2.f", pesoideal);
    }

if (sexo == 'F')
    {
        pesoideal = (62.1 * altura) - 44.7;
        printf ("Seu peso ideal é %2.f", pesoideal);
    }
    
    




}