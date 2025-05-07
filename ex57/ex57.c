#include <stdio.h>

int main (){
    int v1, v2, v3, maior, meio, menor;

    printf("Primeiro valor: ");
    scanf("%i", &v1);

    printf("Segundo valor: ");
    scanf("%i", &v2);

    printf("Terceiro valor: ");
    scanf("%i", &v3);


    //Primeiro pra n me perder
    if (v1 < v2 && v1 <v3)
    {
        menor = v1;
        
        if (v2 < v3)
        {
            meio = v2;
            maior = v3;
        }
        else{
            meio = v3;
            maior = v2;
        }
    }

    //Segundo
    if (v2 <v1 && v2 < v3)
    {
        menor = v1;

        if (v1 < v3)
        {
            meio = v1;
            maior = v3;
        }
        else {
            meio = v3;
            maior = v1;
        }
        
    }
    
    //terceiro
    if (v3 < v1 && v3 < v2)
    {
        menor = v3;

        if (v1 < v2)
        {
            meio = v1;
            maior = v2;
        }
        else {
            meio = v2;
            maior = v1;
        }
    }
    
    printf("\n%i\n%i\n%i\n", menor, meio, maior);
    

}