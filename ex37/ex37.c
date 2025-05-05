#include <stdio.h>

int main (){
    float num1, num2, num3, primeiromaior, segundomaior, conta;

    printf("Primeiro Numero: ");
    scanf("%f",&num1);

    printf("Segundo Numero: ");
    scanf("%f",&num2);

    printf("Teceiro Numero: ");
    scanf("%f",&num3);

    if (num2 > num1 && num3 > num1)
     {
        conta = num2 + num3;
        printf("%.2f",conta);
     }

    else if (num1 > num2 && num3 >num2)
     {
        conta = num1 + num3;
        printf("%.2f",conta);
     }

     else if (num1 > num3 && num2 >num3)
     {
        conta = num1 + num2;
        printf("%.2f",conta);
     }

     
  
   

    }
    


    


    

