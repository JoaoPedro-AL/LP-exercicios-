#include <stdio.h>

int main (){
    int num;

    printf("\nSeu numero: ");
    scanf("%i",&num);

    if (num % 2 == 0)
    {
        printf("\nPar");
    }
    else{
        printf("\nImpar");
    }



}