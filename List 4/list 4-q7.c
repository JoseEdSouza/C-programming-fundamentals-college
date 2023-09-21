/**
 * The program calculates the factorial of a given number using recursion.
 * 
 * @return The function `fatorial` returns the factorial of the input number `n`.
 */
#include <stdio.h>
#include <locale.h>


/**
 * The function calculates the factorial of a given number using recursion.
 * 
 * @param n The parameter "n" represents the number for which we want to calculate the factorial.
 * 
 * @return the factorial of the input number 'n'.
 */
unsigned long long fatorial(int n);


int main() {
    // variáveis
    int n = 0;
    // entrada
    printf("Digite n: ");
    scanf("%d", &n);
    // saída
    printf("%d! = %lld.\n", n, fatorial(n));
    return 0;
}


unsigned long long fatorial(int n) {
    // variáveis
    unsigned long long r = 0;
    // operação
    (n > 1) ? (r = n * fatorial(n - 1)) : (r = 1);
    return r;
}