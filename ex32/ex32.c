#include <stdio.h>

int main (){
    float vendas, calculo1, calculo2, calculo3;

    printf("O quanto voce vendeu esse mes em reais?: ");
    scanf("%f", &vendas);

    if (vendas<=1500)
    {
        calculo1 = (vendas * 0.03) + vendas;

        printf("Seu salario sera de R$%.2f", calculo1);
    }
    
    if (vendas > 1500)
    {
        calculo1 = 1500 * 0.03;

        calculo2 = ((vendas - 1500) * 0.05) + vendas; 

        calculo3 = (calculo1 + calculo2);

        printf ("Seu salario sera de R$%.2f", calculo3);
    }
    


}