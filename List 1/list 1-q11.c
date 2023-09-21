/**
 * This C program calculates the distance between two points in a Cartesian plane.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <math.h>
int main() {
  //variáveis
  int x1, x2, y1, y2, dx, dy;
  float d;
  //entrada
  printf("Digite (x1,y1): ");
  scanf("%d %d", &x1, &y1);
  printf("Digite (x2,y2): ");
  scanf("%d %d", &x2, &y2);
  //formula
  dx = x2 - x1;
  dy = y2 - y1;
  d = sqrt(pow(dx, 2) + pow(dy, 2));
  //saida
  printf("A distancia entre os pontos eh: %.2f\n", d);
  
  return 0;
}