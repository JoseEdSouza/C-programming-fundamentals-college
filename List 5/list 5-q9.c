/**
 * The program takes two arrays of integers as input, multiplies each corresponding element, and
 * returns a new array with the multiplied values.
 * 
 * @return The function "Convert" returns a pointer to a float array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * The function "Convert" takes an array of floats and an integer as input, and returns a new array
 * where each element is divided by the integer.
 * 
 * @param n An array of floats containing the numbers to be converted.
 * @param Maior Maior is an integer parameter that represents the maximum value that the elements in
 * the array can have.
 * 
 * @return a pointer to a float array.
 */

int *Convert(int *n1, int *n2);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int *vetor_a = (int*)malloc(10 * (sizeof(int)));
    int *vetor_b = (int*)malloc(10 * (sizeof(int)));
    int *vetor_c = (int*)malloc(10 * (sizeof(int)));
    // entrada
    printf("//Digite os 10 elementos do primeiro vetor: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor_a[i]);
    }
    printf("//Digite os 10 elementos do segundo vetor: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor_b[i]);
    }
    // operação
    vetor_c = Convert(vetor_a, vetor_b);
    // saída
    printf("\\\\Os elementos multiplicados são: \n");
    for (int i = 0, cont = 0; i < 10; i++)
    {
        if (cont == 0)
        {
            printf("// ");
            cont++;
        }
        printf("%d / ", vetor_c[i]);
    }
    free(vetor_c);
    return 0;
}


int *Convert(int *n1, int *n2)
{
    int *retorno = (int*)malloc(10 * (sizeof(int)));
    for (int i = 0; i < 10; i++)
    {
        retorno[i] = n1[i] * n2[i];
    }
    free(n1);
    free(n2);
    return retorno;
}