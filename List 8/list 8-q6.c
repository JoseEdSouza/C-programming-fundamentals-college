/**
 * The program finds the largest element in an array and stores its address in a pointer.
 * 
 * @return The main function returns an integer value of 0, indicating successful execution of the
 * program. The `maior` function does not return any value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

/**
 * The function "maior" finds the largest element in an array and stores its address in a pointer.
 * 
 * @param vetor A pointer to an array of integers.
 * @param tam The parameter "tam" represents the size of the array "vetor". It indicates the number of
 * elements in the array.
 * @param P_maior A pointer to a pointer to an integer. It is used to store the address of the largest
 * element in the array.
 */
void maior(int *vetor, int tam, int **P_maior);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //* entrada
    int tam = 0;
    int *maiorN = 0;
    printf("//Digite a quantidade de elementos a ser analisada: ");
    scanf("%d", &tam);
    //* definindo o vetor
    int *vetor = (int*) malloc(tam * (sizeof(int)));

    printf("//Digite os %d elementos: ", tam);
    for (int j = 0; j < tam; j++)
    {
        scanf("%d", &vetor[j]);
    }
    maior(vetor, tam, &maiorN);
    printf("\\\\O maior elemento é: %d\n", *(&(*maiorN)));
    free(vetor);
    return 0;
}


void maior(int *vetor, int tam, int **P_maior)
{
    int M = INT_MIN;
    for (int i = 0; i < tam; i++)
    {
        if (*(vetor + i) > M)
        {
            M = *(vetor + i);
        }
    }
    *P_maior = &M;
    **P_maior = M;
}