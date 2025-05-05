#include <stdio.h>

int main (){
    float saldo, debito, credito, saldoatual;

    printf("Saldo: ");
    scanf("%f",&saldo);

    printf("Debito: ");
    scanf("%f",&debito);

    printf("Credito: ");
    scanf("%f",&credito);

    saldoatual = saldo - debito + credito;

    if (saldoatual < 0)
    {
        printf("\nSeu saldo atual e de R$%.2f\nSaldo NEGATIVO", saldoatual);
        
    }
    if (saldoatual >= 0)
    {
        printf("\nSeu saldo atual e de R$%.2f\nSaldo POSITIVO", saldoatual);
    }
    

}