/**
 * This C program takes two numbers as input, performs various mathematical operations on them
 * (addition, multiplication, division, remainder, and exponentiation), and prints the results.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <math.h>
 int main(){
  //variáveis
     int e;
     int n1,n2,s,m,d,r;
  //entrada
     printf("digite n1: ");
     scanf("%d", &n1);
     printf("digite n2: ");
     scanf("%d", &n2);
     printf("valores inseridos: %d,%d\n", n1, n2);
  //formúlas 
     s = n1 + n2;
     m = n1 * n2;
     d = n1 / n2;
     e = pow(n1,n2);
     r = n1 % n2;
  //saída
     printf("a soma e: %d\n", s);
     printf("a multiplicacao eh: %d\n", m);
     printf("a divisao eh: %d\n", d);
     printf("o resto da divisao e: %d\n", r);
     printf("a exponencial eh: %d\n", e);
 
return 0;
}