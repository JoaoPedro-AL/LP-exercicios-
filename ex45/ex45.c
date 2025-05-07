#include <stdio.h>

int main (){
    float macakg, morangokg, conta, conta2, contafinal;

    printf("Kg de maca: ");
    scanf("%f",&macakg);

    printf("Kg de morango: ");
    scanf("%f", &morangokg);

    //MORANGOS
    if (morangokg <= 5)
    {
        conta = morangokg * 2.50;

    
    } else {

        conta = morangokg *2.20;

    }


    //MACA

    if (macakg <= 5)
    {
        conta2 = macakg * 1.80;

    } else {

        conta2 = macakg * 1.50;
    }

    //desconto 

    if ((macakg + morangokg) > 8 || (conta + conta2) > 25)
    {
       contafinal = (conta+conta2) - ((conta+conta2) * 0.1);
       printf("Voce vai pagar %.2f", contafinal);
    }
    else{

        contafinal = conta + conta2;
        printf("Voce vai pagar %.2f", contafinal);


    }
    

}