/**
 * The above function calculates the greatest common divisor (GCD) of two numbers using the Euclidean
 * algorithm.
 * 
 * @return The function `mdc` returns the greatest common divisor (GCD) of the two input numbers, `n1`
 * and `n2`.
 */

#include <stdio.h>
#include <locale.h>


/**
 * The function calculates the greatest common divisor (GCD) of two numbers using the Euclidean
 * algorithm.
 * 
 * @param n1 The first number for which we want to find the greatest common divisor (GCD).
 * @param n2 The second number for which we want to find the greatest common divisor (GCD).
 * 
 * @return the greatest common divisor (GCD) of the two input numbers, n1 and n2.
 */
int mdc(int n1, int n2);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    // entrada
    printf("Digite 2 n�meros para saber o MDC entre eles: ");
    scanf("%i %i", &n1, &n2);
    // saída
    printf("O mdc é: %i\n", mdc(n1, n2));
    printf("**********************\n");
    return 0;
}


int mdc(int n1, int n2)
{
    int r = 1;
    while (r != 0)
    {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}
