#include <stdio.h>
int main (){
    float fruta, calculo; 

    printf("Quantidade de frutas: ");
    scanf("%f", &fruta);

    if (fruta<12)
    {
        calculo = fruta*1.30;
        printf("Voce vai pagar R$%.2f", calculo);
    }
    if (fruta>=12)
    {
        calculo = fruta*1;
        printf("Voce vai pagar R$%.2f", calculo);
    }
    


}