#include <stdio.h>

int main (){
float sexo, altura, calculo;

printf("\nQual o seu sexo?(1 para homem e 2 para mulher): ");
scanf("%f", &sexo);

printf("\nAltura(em metros, ex: 1.81): ");
scanf("%f", &altura);

if (sexo == 1)
{
    calculo = (72.7 * altura) - 58;
    printf("\nSeu peso ideal e %.2f", calculo);
}
else if (sexo == 2)
{
    calculo = (62.1 * altura) - 44.7;
    printf("\nSeu peso ideal e %.2f", calculo);
}


}