#include <stdio.h>

int main (){
    float n1, n2;

    printf("Primeiro numero: ");
    scanf("%f", &n1);

    printf("Segundo numero: ");
    scanf("%f", &n2);

    if (n1>n2)
    {
        printf("\n%.2f \n%.2f", n2, n1);
    }
    if (n1<n2)
    {
        printf("\n%.2f \n%.2f", n1, n2);
    }
    
    


}