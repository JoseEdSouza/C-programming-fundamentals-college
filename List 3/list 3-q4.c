/**
 * This C program checks if a given number is prime or not.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL, "Portuguese");
   //variáveis
   int n, cont;
   //entrada
   printf("Digite um n�mero para saber se ele � primo: ");
   scanf("%d", &n);
   cont = n;
   //operaçao
   for (int i = n;i != 0;i--) {
      if (n % i == 0) cont--;
   }
   //saída
   if (cont == n - 2) printf("O número %d é primo", n);
   else printf("O número %d não é primo.", n);
   return 0;
}