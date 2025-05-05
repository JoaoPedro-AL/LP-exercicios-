#include <stdio.h>

int main (){
    int x, y, z;

    printf("X: ");
    scanf("%i", &x);

    printf("Y: ");
    scanf("%i", &y);

    z = (x * y) + 5;

    if (z <= 0)
    {
        printf("o valor de z e %i e a resposta A", z);
    }

    else if (z <= 100)
    {
        printf("o valor de z e %i e a resposta B", z);
    }

    else    
    {
        printf("o valor de z e %i e a resposta C", z);
    }
    
    


}