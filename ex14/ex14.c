#include <stdio.h>

int main (){
    float salariofixo, carrosvendidos, comissaoporcarro, salariofinal, valortotalvendido;
  
    printf("Salario fixo: R$");
    scanf("%f",&salariofixo);

    printf("Valor Total vendido: R$");
    scanf("%f",&valortotalvendido);

    printf("Carros Vendidos: ");
    scanf("%f",&carrosvendidos);

    printf("Comissao por carro vendido: R$");
    scanf("%f",&comissaoporcarro);

    salariofinal = salariofixo + (carrosvendidos * comissaoporcarro) + (valortotalvendido * 0.05);

    printf("\nSeu salario final sera de: R$%.2f", salariofinal);

    



}