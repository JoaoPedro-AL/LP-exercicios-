#include <stdio.h>

int main (){
    float celsius, fares;

    printf("Fahrenheit: ");
    scanf("%f",&fares);

    celsius = ((fares-32)/9)*5;
    printf("%.2f celsius", celsius);




}