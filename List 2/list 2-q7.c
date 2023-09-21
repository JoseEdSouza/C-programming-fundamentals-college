/**
 * This C program calculates the roots of a quadratic equation and displays them.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
  setlocale(LC_ALL, "Portuguese");
  //variáveis
  float a, b, c, d, x1, x2, X, t, f1, f2;
  //entrada
  printf("Digite os coeficientes de um polinômio do 2°grau (ax² + bx + c= 0): ");
  scanf("%f %f %f", &a, &b, &c);
  //operação
  d = (pow(b, 2) - (4 * a * c));
  x1 = (-b + sqrt(d)) / (2 * a);
  x2 = (-b - sqrt(d)) / (2 * a);
  X = (c * (-1)) / b;
  t = abs(d);
  f1 = (-b / (2 * a));
  f2 = (sqrt(t) / (2 * a));
  //sa�da
  if (a == 0) printf("O valor de x é: %.2f\n", X);
  if (d >= 0) printf("O valor de x1 é: %.2f\nO valor de x2 é: %.2f\n", x1, x2);
  else printf("O valor de x1 é: %.2f + %.2fi\no valor de x2 é: %.2f - %.2fi", f1, f2, f1, f2);
  return 0;
}