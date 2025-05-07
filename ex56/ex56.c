#include <stdio.h>

int main (){
    int v1, v2, conta;
    float conta1;

    printf("Primeiro valor: ");
    scanf("%i", &v1);

    printf("Segundo valor: ");
    scanf("%i", &v2);

    printf("Qual operacao? (1 adicao, 2 Subtracao, 3 Divisao, 4 Multiplicacao): ");
    scanf("%i", &conta);

    if (conta == 1)
    {
        conta1 = v1 + v2;
        printf("\n%.2f", conta1);
    }
    else if (conta == 2)
    {
        conta1 = v1 - v2;
        printf("\n%.2f", conta1);
    }
    else if (conta == 3)
    {
        conta1 = v1 / v2;
        printf("\n%.2f", conta1);
    }
    else if (conta == 4)
    {
        conta1 = v1 * v2;
        printf("\n%.2f", conta1);
    }
    
}