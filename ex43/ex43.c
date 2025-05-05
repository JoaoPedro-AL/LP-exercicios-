#include <stdio.h>

int main (){
char combustivel;
float litros, desconto, calculo;

printf ("Gasolina ou Alcool?(A ou G): ");
scanf("%c", &combustivel);

printf ("Quantos litros: ");
scanf("%f", &litros);

if (combustivel == 'A')
{
    if (litros <= 20)
    {
        desconto = 0.03;

        calculo = (litros*2.90) - ((litros*2.90)*desconto);

        printf("%.2f", calculo);
    }
    else 
    {
        desconto = 0.05;

        calculo = (litros*2.90) - ((litros*2.90)*desconto);

        printf("%.2f", calculo);
    }
}

else if (combustivel == 'G')
{
    if (litros <= 20)
    {
        desconto = 0.04;

        calculo = (litros*3.30) - ((litros*3.30)*desconto);

        printf("%.2f", calculo);
    }
    else 
    {
        desconto = 0.06;

        calculo = +(litros*3.30) - ((litros*3.30)*desconto);

        printf("%.2f", calculo);
    }
}

}