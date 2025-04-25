#include <stdio.h>

int main (){
 float salarioporhora, horastrabalhadas;

 printf("Salario por hora: ");
 scanf("%f",&salarioporhora);

 printf("Horas trabalhadas: ");
 scanf("%f",&horastrabalhadas);
 
 printf("Seu salario é: %.2f",salarioporhora*horastrabalhadas); 

}