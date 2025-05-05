#include <stdio.h>

int main (){
    float num;

    printf("Seu numero: ");
    scanf("%f",&num);

    if (num > 0)
    {
        printf("\nPOSTIVO");
    } 
    
    else if (num == 0)
    {
        printf("\nZERO");
    }
    else if (num < 0)
    {
        printf("\nNEGATIVO");
    }
    
    



}