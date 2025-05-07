#include <stdio.h>

int main (){
float p1, p2, po, calculo;

printf("Prova 1: ");
scanf("%f",&p1);

printf("Prova 2: ");
scanf("%f",&p2);

printf("Optativa: ");
scanf("%f",&po);

if (po == -1 )
{
    calculo= (p1+p2)/2;

}else if (p2 > p1 )
{
    calculo = (po + p2)/2;
}
else{

    calculo = (po + p1)/2;
}

if (calculo >= 6)
{
    printf("Aprovado\n%.2f", calculo);
}
else if (calculo < 3)
{
   printf("Reprovado\n%.2f", calculo);
}
else {
    printf("Exame\n%.2f", calculo);
}


}
