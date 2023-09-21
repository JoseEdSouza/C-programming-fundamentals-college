/**
 * This C program takes two numbers as input and determines which one is greater.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
  //variaveis
  float n1, n2, d;
  //entrada
  printf("Digite n1 e n2: ");
  scanf("%f %f", &n1, &n2);
  //operação
  d = n1 - n2;
  //saída
  if (d > 0) { printf("n1 eh o maior."); }
  else { printf("n2 eh o maior."); }
  return 0;
}