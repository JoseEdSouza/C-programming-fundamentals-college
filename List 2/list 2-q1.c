/**
 * This C program converts a temperature from Celsius to Fahrenheit or from Fahrenheit to Celsius based
 * on user input.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
      setlocale(LC_ALL, "Portuguese_Brazil");
      //variáveis
      float t, tc, tf;
      char e[0];
      //entrada
      printf("Digite uma temperatura e uma escala: ");
      scanf(" %f", &t);
      scanf(" %c", &e);
      //operação
      tf = (t * 1.8) + 32;
      tc = (5 * (t - 32)) / 9;
      //saida
      if (e[0] == 'c') { printf("A temperatura em fahrenheit eh: %.2f", (tf)); }
      else {
            if (e[0] == 'f') { printf("A temperatura em celsius eh: %.2f", tc); }
            else { printf("ERROR: Digite uma escala entre celsius ou fahrenheit."); }
      }
      return 0;
}