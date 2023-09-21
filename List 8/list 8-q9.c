/**
 * The `random_matrix` function generates a random matrix of integers with the specified number of rows
 * and columns.
 * 
 * @return The function `random_matrix` is returning a pointer to a 2D integer array (matrix).
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "matriz.h"

/**
 * The function "random_matrix" generates a random matrix of integers with dimensions l x c.
 * 
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 * 
 * @return The function `random_matrix` is returning a pointer to a 2D integer array (matrix).
 */
int **random_matrix(int l, int c);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    //* entrada
    int l = 0, c = 0;
    printf("//Digite o n�mero de linhas e colunas da matriz de numeros aleatorios: ");
    scanf("%d", &l);
    scanf("%d", &c);
    if (c <= 0 || l <= 0)
    {
        printf("**ERROR-Digite valores positivos nao nulos.");
        return 0;
    }
    int **matriz = random_matrix(l, c);
    printf("\\\\A matriz de numeros aleatorios resultante é: \n");
    PrintMatrizInt(matriz, l, c);
    return 0;
}



int **random_matrix(int l, int c)
{
    int **matrix = CreatMatrizInt(l, c);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(matrix + i) + j) = rand() % 100 + 1; 
        }
    }
    return matrix;
}
