#include <stdio.h>

int main (){

int cod;

printf("Digite o codigo da regiao: ");
scanf("%i", &cod);

if (cod == 1)
{
    printf("\nRegiao Sul");
} 
else if (cod == 2)
{
    printf("\nRegiao norte");
}
else if (cod == 3)
{
    printf("\nRegiao Leste");
}
else if (cod == 4)
{
    printf("\nRegiao Oeste");
}
else if (cod == 5 || cod == 6)
{
    printf("\nRegiao Nordeste");
}
else if (cod == 7 || cod == 8 || cod == 9)
{
    printf("\nRegiao Sudeste");
}
else if (cod == 10)
{
    printf("\nRegiao Centro-Oeste");
}
else if (cod == 11)
{
    printf("\nRegiao Noroeste");
}
else{
    printf("\nImportado");
}





}