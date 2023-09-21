/**
 * This C program calculates a person's age in years, months, and weeks based on their year of birth
 * and the current year.
 *
 * @return The main function is returning 0.
 */
#include <stdio.h>
int main() {
  //variaveis
  int an, aa;
  //entrada
  printf("Digite respectivamente seu ano de nascimento e o ano atual: ");
  scanf("%d %d", &an, &aa);
  //saida
  printf("sua idade eh: \n");
  printf("em anos- %d anos\n", (aa - an));
  printf("em meses- %d meses\n", ((aa - an) * 12));
  printf("em semanas- %d semanas\n", ((aa - an) * 52));
  
  return 0;
}