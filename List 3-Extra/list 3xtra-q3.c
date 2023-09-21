/**
 * This C program takes input from the user until a negative number is entered, and then it finds the
 * maximum and minimum numbers entered.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <locale.h>
# include <limits.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int n = 0, v = 0, va = 0, max = INT_MIN, min = INT_MAX;
    //entrada
    while (n >= 0) {
        printf("Digite um número (-1 para sair): ");
        scanf("%i", &n);
        printf("*%i\n", n);
        if (n >= 0) v = n;
        if (v > max) max = v;
        if (v < min) min = v;
    }
    //saída
    printf("O maior número é: %i\nO menor número é: %i\n", max, min);
    return 0;
}