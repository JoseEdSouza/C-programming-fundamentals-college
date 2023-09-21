/**
 * The program creates an array of multiples of 3 and prints the specified number of multiples.
 * 
 * @return The function `Multi3` returns a pointer to an integer array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/**
 * The function Multi3 creates and returns a dynamically allocated array of integers containing
 * multiples of 3.
 * 
 * @param tam The parameter "tam" represents the size of the array that will be created.
 * 
 * @return a pointer to an integer array.
 */
int *Multi3(int tam);
/**
 * The function "printavetor" prints the elements of an integer array.
 * 
 * @param vetor The parameter "vetor" is a pointer to an integer array.
 * @param tam The parameter "tam" represents the size of the array "vetor". It indicates the number of
 * elements in the array.
 */
void printavetor(int *vetor, int tam);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //* entrada
    int tam = 0;
    int *vetor;
    printf("//Digite a quantidade de multiplos a ser exibida: ");
    scanf("%d", &tam);
    vetor = Multi3(tam);
    printf("\\\\Os %d primeiros multiplos de 3 são: ", tam);
    printavetor(vetor, tam);
    free(vetor);
    return 0;
}



int *Multi3(int tam)
{
    //*defininfo o vetor
    int *vetor = (int*)malloc(tam * (sizeof(int)));
    for (int i = 0; i < tam; i++)
    {
        *(vetor + i) = (3 * (i + 1)); //? vetor recebe os multiplos de 3 apartir de 3.
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