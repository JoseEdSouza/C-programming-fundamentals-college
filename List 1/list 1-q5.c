/**
 * This C program calculates the Body Mass Index (BMI) based on the user's weight and height.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
 int main (){
   //variáveis 
     float peso,altura,IMC;
   //entrada
     printf("digite sua altura: ");
     scanf("%f", &altura);
     printf("digite seu peso: ");
     scanf("%F", &peso);
   //forumla
     IMC = peso/(altura*altura);
   //saida
     printf("o IMC eh: %f\n", IMC);
 
 return 0;
 }