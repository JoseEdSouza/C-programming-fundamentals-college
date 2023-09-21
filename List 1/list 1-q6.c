/**
 * This C program calculates the volume and area of a box based on user input for its dimensions.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
 int main(){
  //variáveis
   float c,h,l,v,a;
  //entrada
   printf("digite a largura da caixa em metros: ");
   scanf("%f", &l);
   printf("digite a altura da caixa em metros: ");
   scanf("%f", &h);
   printf("digite o comprimento da caixa em metros: ");
   scanf("%f", &c);
  //formulas
   v = c*l*h;
   a = c*l;
  //saida
   printf("o volume da caixa eh: %f m3\n", v);
   printf("a area da tampa da caixa eh: %f m2\n", a);
 system ("pause");
return 0;
}
