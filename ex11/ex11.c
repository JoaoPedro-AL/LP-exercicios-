#include <stdio.h>

int main (){
    float Total, Brancos, Nulos, Validos;

    printf("Numero de votos total: ");
    scanf("%f",&Total);

    printf("Votos em branco: ");
    scanf("%f",&Brancos);

    printf("Votos nulos: ");
    scanf("%f",&Nulos);

    printf("Numero de votos validos: ");
    scanf("%f",&Validos);
    
    printf("\nA porcentagem dos votos %.0f%%:\nTotal: %.2f%% \nNulos: %.2f%% \nValidos: %.2f%%", Total, (Brancos/Total)*100, (Nulos/Total)*100, (Validos/Total)*100);

    




}