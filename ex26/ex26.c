#include <stdio.h>
int main (){
    int anonasc, anoatual, sub;

    printf("Ano atual: ");
    scanf("%i",&anoatual);

    printf("Ano de nascimento: ");
    scanf("%i", &anonasc);

    sub = anoatual - anonasc;

    if (sub>=18)
    {
        printf("Voce vai poder votar");
    }
    if (sub<18)
    {
        printf("Voce não vai poder votar");
    }
    


}