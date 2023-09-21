/**
 * The above code is a C program that takes two matrices as input, multiplies them, and prints the
 * resulting matrix.
 *
 * @return The function `MultipliMatriz` returns a pointer to a 2D integer array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 // fun��es

 /**
  * The function "freedom" frees the memory allocated for a 2D array.
  *
  * @param _Memory _Memory is a pointer to a pointer to an integer. It represents a dynamically
  * allocated 2D array.
  * @param l The parameter "l" represents the length or size of the memory array.
  */
void freedom(int** _Memory, int l);
/**
 * The function CreatMatrizInt creates a 2D integer matrix of size i x j.
 *
 * @param i The parameter "i" represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 *
 * @return a pointer to a pointer to an integer, which represents a dynamically allocated matrix of
 * integers.
 */
int** CreatMatrizInt(int i, int j);
/**
 * The function MultipliMatriz takes two matrices as input and returns their product as a new matrix.
 *
 * @param Matriz_a A 2D array representing the first matrix.
 * @param la The parameter "la" represents the number of rows in the matrix "Matriz_a".
 * @param ca The parameter "ca" represents the number of columns in the matrix "Matriz_a".
 * @param Matriz_b The parameter "Matriz_b" is a 2D array representing the second matrix in the
 * multiplication operation. It has "lb" rows and "cb" columns.
 * @param lb The parameter "lb" represents the number of rows in the second matrix, Matriz_b.
 * @param cb The parameter "cb" represents the number of columns in the matrix "Matriz_b".
 *
 * @return a pointer to a 2D integer array.
 */
int** MultipliMatriz(int** Matriz_a, int la, int ca, int** Matriz_b, int lb, int cb);
/**
 * The function `PrintMatriz` prints a 2D matrix of integers with a specified number of rows and
 * columns.
 *
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 *
 * WARNING the function calls freedom on Matriz
 */
void PrintMatriz(int** Matriz, int l, int c);
/**
 * The function receives a matrix and its size and inputs the elements of the matrix.
 *
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 */
void InputMatriz(int** Matriz, int l, int c);

// main
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
        return 1;
    }
    if (c1 != l2) {
        printf("\\\\Não é possível multiplicar matrizes que o número de colunas da primeira seja diferente do número de linhas da segunda.\n");
        return 1;
    }
    // definindo as matrizes.
    int** Matriz_1 = CreatMatrizInt(l1, c1);
    printf("--Digite os elementos da primeira matriz: \n");
    InputMatriz(Matriz_1, l1, c1);
    int** Matriz_2 = CreatMatrizInt(l2, c2);
    printf("--Digite os elementos da segunda matriz: \n");
    InputMatriz(Matriz_2, l2, c2);
    // sa�da
    printf("\\\\A matriz resultante %dX%d é: \n", l1, c2);
    PrintMatriz(MultipliMatriz(Matriz_1, l1, c1, Matriz_2, l2, c2), l1, c2);
    freedom(Matriz_1, l1);
    freedom(Matriz_2, l2);
    
    ;
    return 0;
}


void freedom(int** _Memory, int l) {
    for (int i = 0; i < l; i++) {
        free(_Memory[i]);
    }
    free(_Memory);
}


int** CreatMatrizInt(int i, int j) {
    int** Matriz = (int**)malloc(i * (sizeof(int*)));
    for (int cont = 0; cont < i; cont++)
        Matriz[cont] = (int*)malloc(j * sizeof(int));
    return Matriz;
}


void InputMatriz(int** Matriz, int l, int c) {
    for (int i = 0; i < l; i++) {
        printf("//Digite os %d elementos da linha %d\n", c, (i + 1));
        for (int j = 0; j < c; j++) {
            scanf("%d", &Matriz[i][j]);
        }
    }
}


void PrintMatriz(int** Matriz, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%5d", Matriz[i][j]);
        }
        printf("\n");
    }
    freedom(Matriz, l);
}


int** MultipliMatriz(int** Matriz_a, int la, int ca, int** Matriz_b, int lb, int cb) {
    int** resultado = CreatMatrizInt(la, cb);
    for (int i = 0; i < la; i++) {
        for (int j = 0; j < cb; j++) {
            resultado[i][j] = 0;
            for (int w = 0; w < ca; w++) {
                resultado[i][j] += (Matriz_a[i][w] * Matriz_b[w][j]);
            }
        }
    }
    return resultado;
}