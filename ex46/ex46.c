#include <stdio.h>

int main (){
    int cod = 1234, senha = 9999, cod1, cod2;

    printf ("Digite seu codigo de 4 digitos: ");
    scanf ("%i", &cod1);

    //usuario

   while (cod1 != cod)
   {

    printf("Codigo incorreto, tente novamente: ");
    scanf("%i",&cod1);

   }

   printf("Parabens, codigo correto");

   //senha

   printf ("\n\nDigite sua senha de 4 digitos: ");
   scanf ("%i", &cod2);

   while (cod2 != senha)
   {
    
    printf("Senha incorreta, tente novamente: ");
    scanf("%i", &cod2);

   }
   
   printf("\n\nParabens, senha correta");

}