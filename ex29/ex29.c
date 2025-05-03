#include <stdio.h>

int main (){
    int inicio, fim, calculo;

    printf("Horario de inicio: ");
    scanf("%i", &inicio);

    printf("Horario de termino: ");
    scanf("%i", &fim);

    if (inicio==fim)
    {
        printf("\nO jogo durou 24h");
    }
    if (fim>inicio)
    {
        calculo = fim - inicio;
        printf("\nA partida durou %ih", calculo);
    }
    if (fim<inicio)
    {
        calculo = (24-inicio) + fim;
        printf("\nA partida durou %ih", calculo);
    }
    
    



}