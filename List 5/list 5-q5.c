/**
 * The program takes in a user-defined number of integers, calculates the absolute difference between
 * consecutive numbers, and prints the absolute values of these differences.
 * 
 * @return The function "mod" returns the absolute value of a given number.
 */
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

/**
 * The function "mod" returns the absolute value of a given number.
 * 
 * @param n The parameter "n" is an integer value.
 * 
 * @return the absolute value of the input number.
 */
int mod(int n);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // entrada
    int n = 0; // define o tamanho do vetor.
    printf("//Digite a quantidade de números do vetor: ");
    scanf("%d", &n);
    // variáveis
    if (n <= 30)
    {
        int* vetor = (int*) malloc(n*sizeof(int));
        printf("//Digite os números: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vetor[i]);
        }
        // saída
        printf("\\\\Os modólos das diferenças conscutivas são: \n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("--%d", (mod(vetor[i] - vetor[i + 1])));
        }
        free(vetor);
    }
    else
        printf("**ERROR-Digite um número até 30.\n");
    return 0;
}


int mod(int n)
{
    if (n >= 0)
        return (n);
    else
        return (-(n));
}