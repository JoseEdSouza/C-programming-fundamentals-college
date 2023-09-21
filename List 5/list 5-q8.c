/**
 * The program takes an array of floats and an integer as input, divides each element of the array by
 * the integer, and returns a new array with the converted values.
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
float *Convert(float *n, int Maior);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int n = 0;
    int Maior = 0;
    float *vetor = malloc(20 * (sizeof(float)));
    // entrada
    printf("//Digite os 20 elementos: \n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%f", &vetor[i]);
        if (vetor[i] > Maior)
            Maior = vetor[i];
    }
    // operação
    int* new = Convert(vetor, Maior);
    free(vetor);
    vetor = new;
    // saída
    printf("\\\\Os elementos dividos s�o: \n");
    for (int i = 0, cont = 0; i < 20; i++)
    {
        if (cont == 0)
        {
            printf(" / ");
            cont++;
        }
        printf("%g / ", vetor[i]);
    }
    free(vetor);
    return 0;
}


float *Convert(float *n, int Maior)
{
    float *retorno = (int*)malloc(20 * (sizeof(float)));
    for (int i = 0; i < 20; i++)
    {
        retorno[i] = (float)n[i] / (float)Maior;
    }
    return retorno;
}