/**
 * The program takes two integers and a character as input, performs the corresponding arithmetic
 * operation on the integers based on the character, and returns the result.
 * 
 * @return The function `calculadora` returns the result of the calculation based on the given
 * operator.
 */
#include <stdio.h>
#include <locale.h>

/**
 * The function "calculadora" takes two integers and a character as input and performs the
 * corresponding arithmetic operation on the integers based on the character.
 * 
 * @param n1 The first number for the calculation.
 * @param n2 The parameter "n2" represents the second number that will be used in the calculation.
 * @param c The parameter 'c' is a character that represents the operation to be performed. It can be
 * one of the following: '+', '-', '*', or '/'.
 * 
 * @return the result of the calculation based on the given operator.
 */
int calculadora(int n1, int n2, char c);

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n1 = 0, n2 = 0;
  char c;
  // entrada
  printf("Digite a operação desejada(+,-,*,/), n1 e n2: ");
  scanf("%s", &c);
  scanf("%d", &n1);
  scanf("%d", &n2);
  if (c != '+' && c != '-' && c != '*' && c != '/') {
    printf("**ERROR - operação inválida\n");
    return 1;
  }
  // saída
  printf("n1 %c n2 = %d\n", c, calculadora(n1, n2, c));
  return 0;
}


int calculadora(int n1, int n2, char c) {
  int r = 0;

  if (c == '+')
    r = n1 + n2;
  if (c == '-')
    r = n1 - n2;
  if (c == '*')
    r = n1 * n2;
  if (c == '/')
    r = n1 / n2;
  return r;
}