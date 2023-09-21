/**
 * The program calculates the nth Fibonacci number using recursion and prints the result.
 * 
 * @param n The parameter "n" represents the position of the Fibonacci number in the sequence that we
 * want to calculate.
 * 
 * @return The function `fibonacci` returns the nth Fibonacci number as an unsigned long long integer.
 */
#include <stdio.h>
#include <locale.h>

/**
 * The function calculates the nth Fibonacci number using recursion.
 * 
 * @param n The parameter "n" represents the position of the Fibonacci number in the sequence that we
 * want to calculate.
 * 
 * @return the nth Fibonacci number as an unsigned long long integer.
 */
unsigned long long fibonacci(int n) {
    if (n <= 2)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int n;
    // entrada
    printf("Digite um termo da sequ�ncia de fibonacci: ");
    scanf("%d", &n);
    // saída
    printf("%d� termo �: %lld", n, fibonacci(n));
    return 0;
}
