/**
 * This C program calculates the weighted average of three numbers.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
 int main() {
  //variáveis
    float n1,n2,n3,p1,p2,p3,par1,par2,par3,MP;
  //entrada
   printf("digite n1 e p1: ");
   scanf("%f %f", &n1, &p1);
   printf("digite n2 e p2: ");
   scanf("%f %f", &n2, &p2);
   printf("digite n3 e p3: ");
   scanf("%f %f", &n3, &p3);
 //formulas
   par1 = n1*p1;
   par2 = n2*p2;
   par3 = n3*p3;
   MP = (par1 + par2 + par3)/(p1+p2+p3);
  //saída
   printf("a media ponderada deles eh: %f\n", MP);
 system ("pause");
return 0;
}