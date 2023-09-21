/**
 * The program takes in a user-defined number of float values, truncates each value to its integer
 * part, and then prints the truncated values.
 * 
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/**
 * The function trunca truncates each element in a float array to its integer part.
 * 
 * @param vetor A pointer to a float array.
 * @param tam The parameter "tam" represents the size of the array "vetor". It indicates the number of
 * elements in the array.
 */
void trunca(float *vetor, int tam);

\
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam = 0;
    printf("//Digite a quantidade de números a serem truncados: ");
    scanf("%d", &tam);
    float *vetor = (float*)malloc(tam * (sizeof(float))); // vetor dos elementos
    printf("//Digite os %d números: ", tam);
    for (int p = 0; p < tam; p++)
    {
        scanf("%f", &(*(vetor + p)));
    }
    trunca(vetor, tam);
    printf("\\\\Os números truncados são: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%.2f  ", *(vetor + i));
    }
    free(vetor);
    return 0;
}


void trunca(float *vetor, int tam)
{
    float x = 0;
    for (int i = 0; i < tam; i++)
    {
        *(vetor + i) = (int)(*(vetor + i));
    }
}