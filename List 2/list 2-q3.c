/**
 * This C program takes three numbers as input and prints the largest number among them.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
     //variáveis
     float n1, n2, n3;
     //entrada
     printf("digite n1,n2 e n3: ");
     scanf("%f %f %f", &n1, &n2, &n3);
     //saida
     if (n1 > n2 && n1 > n3) { printf("%.1f maior numero.", n1); }
     else {
          if (n2 > n1 && n2 > n3) { printf("%.1f maior numero.", n2); }
          else { printf("%.1f maior numero", n3); }
     }
     return 0;
}