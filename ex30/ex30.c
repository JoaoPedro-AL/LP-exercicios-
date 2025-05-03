#include <stdio.h>

int main (){
    float horastrab, valorhora, horaextra, calculo;

    printf("Quantas horas voce trabalhou esse mes?: ");
    scanf("%f",&horastrab);

    printf("Quanto voce ganha por hora trabalhada?: ");
    scanf("%f", &valorhora);

    if (horastrab<=40)
    {
        calculo = horastrab*valorhora;
        printf("Seu salario esse mes será de %.2f e voce não fez nenhuma hora extra");
    }
    if (horastrab>40)
    {
        horaextra = horastrab - 40;
        calculo = (40*valorhora)+(valorhora*1.50*(horaextra));
        printf("Seu salario esse mes será de %.2f e vc fez %.2f horas extras", calculo, horaextra);
    }
    
    




}