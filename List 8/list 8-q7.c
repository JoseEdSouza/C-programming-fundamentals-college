/**
 * The above code generates an array of random integers between 1 and 100 and prints the elements of
 * the array.
 * 
 * @return The function `randomarray` returns a pointer to an integer array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "matriz.h"


/**
 * The function "randomarray" generates an array of random integers between 1 and 100.
 * 
 * @param n The parameter "n" represents the size of the array that will be generated.
 * 
 * @return a pointer to an integer array.
 */
int *randomarray(int n);
/**
 * The function "printavetor" prints the elements of an integer array.
 * 
 * @param vetor A pointer to the first element of the array.
 * @param tam The parameter "tam" represents the size of the array "vetor". It indicates the number of
 * elements in the array.
 */
void printavetor(int *vetor, int n);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    //* entrada
    int n = 0;
    int *vetor = NULL;
    printf("//Digite a quantidade n�meros aleatórios a serem gerados: ");
    scanf("%d", &n);
    vetor = randomarray(n);
    printf("\\\\Os %d números aleatórios são: ", n);
    printavetor(vetor, n);
    free(vetor);
    return 0;
}



int *randomarray(int n)
{
    //*definindo o vetor
    int *vetor = (int*)malloc(n * (sizeof(int)));
    for (int i = 0; i < n; i++)
    {
        *(vetor + i) = rand() % 100 + 1; 
    }
    return vetor;
}


void printavetor(int *vetor, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}
