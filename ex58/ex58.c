#include <stdio.h>

int main (){
    float l1, l2, l3;

    printf("Digite os 3 lados:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    //primeiro
    if (l1 == l2 && l1 == l3 && l2 == l3)
    {
        printf("Triangulo equilatero");
    }

    //segundo
    else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("Triângulo isósceles");
    }

    //terceiro
    else
    {
        printf("Triangulo Escaleno");
    }
    
    

}