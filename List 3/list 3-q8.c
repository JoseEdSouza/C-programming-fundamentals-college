/**
 * This C program calculates the greatest common divisor (GCD) of two numbers using the Euclidean
 * algorithm.
 * 
 * @return The program is returning 0, which indicates that the program executed successfully.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int n1, n2, r = 1, cont = 0;
    //entrada
    printf("Digite n1 e n2 para calcular seu MDC: ");
    scanf("%d %d", &n1, &n2);
    //operação
    while (r != 0) {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
        cont++;
    }
    printf("%d operações\n", cont);
    //saída
    printf("O MDC de n1 e n2 é: %d", n1);
    return 0;
}

