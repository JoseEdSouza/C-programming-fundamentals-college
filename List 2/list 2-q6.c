/**
 * This C program checks if a given year is a leap year or not.
 *
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL, "Portuguese");
   //variáveis
   int a;
   //entrada
   printf("Digite um ano para saber se ele é bissexto: ");
   scanf("%i", &a);
   //saída
   if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) { printf("%i é bissexto.", a); }
   else { printf("%i não é bissexto.", a); }
   return 0;
}