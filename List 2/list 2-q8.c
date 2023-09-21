/**
 * This C program calculates the body mass index (BMI) based on weight and height inputs and provides a
 * classification of the BMI category.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
     setlocale(LC_ALL, "Portuguese");
     // variáveis
     float IMC, p, a;
     // entrada
     printf("Digite o peso(Kg) e a altura(m): ");
     scanf("%f %f", &p, &a);
     // operação
     IMC = p / pow(a, 2);
     // saida
     if (IMC < 16) {
          printf("Baixo peso(grau I)");
     }
     else {
          if (IMC >= 16 && IMC < 17) {
               printf("Baixo peso(grau II)");
          }
          else {
               if (IMC >= 17 && IMC < 18.5) {
                    printf("Baixo peso(grau III)");
               }
               else {
                    if (IMC >= 18.5 && IMC < 25) {
                         printf("Peso adequado");
                    }
                    else {
                         if (IMC >= 25 && IMC < 30) {
                              printf("Sobrepeso");
                         }
                         else {
                              if (IMC >= 30 && IMC < 35) {
                                   printf("Obesidade (grau I)");
                              }
                              else {
                                   if (IMC >= 35 && IMC < 40) {
                                        printf("Obesidade (grau II)");
                                   }
                                   else {
                                        printf("Obesidade (grau III)");
                                   }
                              }
                         }
                    }
               }
          }
     }
     return 0;
}
