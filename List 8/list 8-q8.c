/**
 * The program generates a random matrix of integers with a specified number of rows and columns and
 * prints it.
 *
 * @return The function `random_matrix` returns a pointer to an integer array, which represents a
 * random matrix of size l x c.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

 /**
  * The function "random_matrix" generates a random matrix of size l x c and returns a pointer to the
  * matrix.
  *
  * @param l The parameter "l" represents the number of rows in the matrix.
  * @param c The parameter "c" represents the number of columns in the matrix.
  *
  * @return a pointer to an integer array, which represents a random matrix of size l x c.
  */
int* random_matrix(int l, int c);
/**
 * The function `PrintMatrizInt` prints a matrix of integers with a specified number of rows and
 * columns.
 *
 * @param Matriz A pointer to the first element of the matrix.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 */
void PrintMatrizInt(int* Matriz, int l, int c);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    //* entrada
    int l = 0, c = 0;
    printf("//Digite o numero de linhas e colunas da matriz de numeros aleatorios: ");
    scanf("%d", &l);
    scanf("%d", &c);
    if (c <= 0 || l <= 0) {
        printf("**ERROR-Digite valores positivos nao nulos.");
        return 0;
    }
    int* matriz = random_matrix(l, c);

    printf("\\\\A matriz de numeros aleatorios resultante e: \n");
    PrintMatrizInt(matriz, l, c);
    free(matriz);
    return 0;
}



int* random_matrix(int l, int c) {
    int* matrix = (int*)malloc(l * c * (sizeof(int)));
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            *(matrix + ((i * c) + j)) = rand() % 100 + 1;
        }
    }
    return matrix;
}


void PrintMatrizInt(int* Matriz, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%5d", *((Matriz + (i * c) + j)));
        }
        printf("\n");
    }
}