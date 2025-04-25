#include<stdio.h>

int main (){
    int ano, mes, dia, idade;

    printf("Anos: ");
    scanf("%i",&ano);

    printf("Meses: ");
    scanf("%i",&mes);

    printf("Dias: ");
    scanf("%i",&dia);

    idade = 365*ano + 30*mes + dia;
    
    printf("Voce ja viveu %i dias", idade);

}