#include <stdio.h>

int main (){
    float comprimento, numerodvoltas, numerodreabastecimentos, consumocomb, pistaemM, litrosnecessarios;
    
    printf("Comprimento da pista em metros: ");
    scanf("%f", &comprimento);

    printf("Numeor de voltas: ");
    scanf("%f",&numerodvoltas);

    printf("Numero de reabasteciomentos desejados: ");
    scanf("%f",&numerodreabastecimentos);

    printf("Consumo de combustivel em Km/L: ");
    scanf("%f",&consumocomb);



    litrosnecessarios = (comprimento*(numerodvoltas/(numerodreabastecimentos+1))/1000)/consumocomb;

    printf("Serao necessarios %.2fL para o proximo reabastecimento do carro", litrosnecessarios);
    





}