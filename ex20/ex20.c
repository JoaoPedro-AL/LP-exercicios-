#include <stdio.h>
int main(){
    float marcacaoindia, macacaofimdia, combustivelgasto,  valortotal, percorrido, lucro;

    printf("Odometro inicio do dia: Km");
    scanf("%f", &marcacaoindia);

    printf("Odometro fim do dia: Km");
    scanf("%f", &macacaofimdia);

    printf("Combustivel gasto: ");
    scanf("%f", &combustivelgasto);

    printf("Valor total ganho: R$");
    scanf("%f",&valortotal);

    percorrido = (macacaofimdia-marcacaoindia)/combustivelgasto;
    lucro = valortotal-(combustivelgasto*2.18);

    printf("\nVoce fez %.2fKm/L hoje", percorrido);
    printf("\nSeu lucro liquido foi de R$%.2f", lucro);


}
