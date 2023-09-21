/**
 * This C program takes user input to define the sizes of two matrices, then prompts the user to enter
 * the elements of each matrix, and finally multiplies the two matrices together and prints the
 * resulting matrix.
 *
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"


int main() {
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int l1 = 0, l2 = 0, c1 = 0, c2 = 0;
    // entrada
    printf("--Defina o tamanho da primeira matriz.\n");
    printf("//Quantidade de linhas: ");
    scanf("%d", &l1);
    printf("//Quanidade de Colunas: ");
    scanf("%d", &c1);
    if (l1 <= 0 || c1 <= 0) {
        printf("**ERROR-Digite valores positvos não nulos.\n");
        return 0;
    }
    printf("--Defina o tamanho da segunda matriz.\n");
    printf("//Quantidade de linhas: ");
    scanf("%d", &l2);
    printf("//Quanidade de Colunas: ");
    scanf("%d", &c2);
    if (l2 <= 0 || c2 <= 0) {
        printf("**ERROR-Digite valores positvos não nulos.\n");
        return 0;
    }
    if (c1 != l2) {
        printf("\\\\Nao é possível multiplicar matrizes que o numero de colunas da primeira seja diferente do numero de linhas da segunda.\n");
        return 0;
    }
    // definindo as matrizes.
    int** Matriz_1 = CreatMatrizInt(l1, c1);
    printf("--Digite os elementos da primeira matriz: \n");
    InputMatrizInt(Matriz_1, l1, c1);
    int** Matriz_2 = CreatMatrizInt(l2, c2);
    printf("--Digite os elementos da segunda matriz: \n");
    InputMatrizInt(Matriz_2, l2, c2);
    printf("\\\\A matriz resultante %dX%d é: \n", l1, c2);
    PrintMatrizInt(MultipliMatriz(Matriz_1, l1, c1, Matriz_2, l2, c2), l1, c2);
    freedom(Matriz_1, l1);
    freedom(Matriz_2, l2);
    return 0;
}

