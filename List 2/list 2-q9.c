/**
 * This C program calculates the water bill based on the type of customer and their water consumption.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
     setlocale(LC_ALL, "Portuguese");
     //variáveis
     char t;
     int v;
     float pc, pr, pi;
     //entrada
     printf("**************\n");
     printf("--------VALOR DA CONTA DE ÁGUA--------\n");
     printf("Residencial = r\nComercial = c\nIndustrial = i\n");
     printf("--------------------------------------\n");
     printf("**************\n");
     printf("Digite o tipo de cliente e o seu consumo(m³): ");
     scanf(" %c", &t);
     scanf("%d", &v);
     //operações

     if (v <= 100) {
          pi = 800;
     }
     else {
          pi = 800 + (0.04 * v);
     }
     if (v <= 80) {
          pc = 500;
     }
     else {
          pc = 500 + (0.03 * v);
     }

     pr = 5 + (0.05 * v);

     //saída
     if ((t == ('r')) || (t == ('R'))) {
          printf("o valor da conta é: R$ %.2f\n", pr);
     }
     else if ((t == 'c') || (t == 'C')) {
          printf("o valor da conta é: R$ %.2f\n", pc);
     }
     else if ((t == 'i') || (t == 'I')) {
          printf("o valor da conta é: R$ %.2f\n", pi);
     }
     else {
          printf("**ERROR** Digite um tipo de consumidor válido.");
     }
     return 0;
}