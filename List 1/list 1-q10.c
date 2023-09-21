/**
 * This C program calculates the amount of money each person should pay towards a shared bill based on
 * their salaries.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
  //variáveis
  float s1, s2, c, s, c1, c2;
  //entrada
  printf("Digite o salario de M1: ");
  scanf("%f", &s1);
  printf("Digite o salario de J1: ");
  scanf("%f", &s2);
  printf("Digite o valor da conta: ");
  scanf("%f", &c);
  //formulas
  s = s1 + s2;
  c1 = (s1 * c) / s;
  c2 = (s2 * c) / s;
  //saida
  printf("O valor para M1: %f\n", c1);
  printf("O valor para J1: %f\n", c2);
  
  return 0;
}
