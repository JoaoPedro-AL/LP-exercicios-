#include <stdio.h>

int main (){
    int m1, m2, h1, h2, conta1, conta2;

    printf("Idade da primeira mulher: ");
    scanf("%i", &m1);

    printf("Idade da segunda mulher: ");
    scanf("%i", &m2);

    printf("Idade do primeiro homem: ");
    scanf("%i", &h1);

    printf("Idade do segundo homem: ");
    scanf("%i", &h2);

    if (h1 < h2 && m1 < m2)
    {
        conta1 = h2 + m1;
        conta2 = h1 *m2;

        printf("A soma é %i e o produto %i", conta1, conta2);
    }
    else if (h1 > h2 && m1 < m2)
    {
        conta1 = h1 + m1;
        conta2 = h2 *m2;

        printf("A soma é %i e o produto %i", conta1, conta2);
    }
    else if (h1 < h2 && m1 > m2)
    {
        conta1 = h2 + m2;
        conta2 = h1 *m1;

        printf("A soma é %i e o produto %i", conta1, conta2);
    }
    else if (h1 > h2 && m1 > m2)
    {
        conta1 = h1 + m2;
        conta2 = h2 *m1;

        printf("A soma é %i e o produto %i", conta1, conta2);
    }
    
    



}