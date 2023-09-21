/**
 * This C program calculates the difference in pressure between a desired pressure and the current
 * pressure of a tire.
 *
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
  //variaveis
  float pd, pa, d;
  //entrada
  printf("digite a pressao desejada: ");
  scanf("%f", &pd);
  printf("digite a pressao do pneu: ");
  scanf("%f", &pa);
  //formula
  d = pd - pa;
  //saida
  printf("a diferenca de pressao eh: %f\n", d);
  
  return 0;
}