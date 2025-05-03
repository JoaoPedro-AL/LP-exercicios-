#include <stdio.h>

int main (){
    float n1, n2;

    printf("Primeiro numero: ");
    scanf("%f", &n1);

    printf("Segundo numero: ");
    scanf("%f", &n2);

    if (n1>n2)
    {
        printf("%.2f maior que %.2f", n1, n2);
    }
    if (n1<n2)
    {
        printf("%.2f maior que %.2f", n2, n1);
    }
    
    


}