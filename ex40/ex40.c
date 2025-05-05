#include <stdio.h>

int main (){
    char time1[50], time2[50];
    int gol1, gol2;

    printf("Primeiro time: ");
    scanf("%s", &time1);

    printf("Segundo time: ");
    scanf("%s", &time2);

    printf("Gols time 1: ");
    scanf("%i", &gol1);
    
    printf("Gols time 2: ");
    scanf("%i", &gol2);

    if (gol1 > gol2)
    {
        printf("O %s ganhou do %s com %i gols", time1, time2, gol1);
    }
    else
    {
        printf("O %s ganhou do %s com %i gols", time2, time1, gol2);
    }

    

}