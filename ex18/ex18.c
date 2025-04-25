#include <stdio.h>

int main (){
    float largura, comprimento, area, ptdalamp, qtdelampada;

    printf("Largura do comodo em metros: ");
    scanf("%f",&largura);

    printf("Comprimento do comodo em metros: ");
    scanf("%f", &comprimento);

    area = largura*comprimento;

    printf("Potencia da lampada em Whats: ");
    scanf("%f",&ptdalamp);  

    qtdelampada = (area*18)/ptdalamp;

    printf("\nA quantidade de lampadas seta de: %.2f", qtdelampada);


}