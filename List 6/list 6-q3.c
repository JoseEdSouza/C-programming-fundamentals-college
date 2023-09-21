/**
 * The above code is a C program that creates a 2D matrix, allows the user to input values for the
 * matrix, and then performs analysis on the matrix, including counting the number of elements in a
 * given row that are between 15 and 20 (inclusive) and calculating the average of the even elements in
 * the matrix.
 * 
 * @return The main function returns an integer value of 0. The functions `mediapar`, `analise`,
 * `CreatMatrizInt`, and `freedom` do not have return statements.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
 * The function "analise" counts the number of elements in a given row of a matrix that are between 15
 * and 20 (inclusive).
 *
 * @param matriz A 2D array (matrix) of integers.
 * @param l The parameter "l" represents the row index of the matrix. It is used to specify which row
 * of the matrix we want to analyze.
 * @param c The parameter `c` represents the number of columns in the matrix.
 *
 * @return the number of elements in the specified row of the matrix that are between 15 and 20
 * (inclusive).
 */
float mediapar(int** matriz, int l, int c);
/**
 * The function "analise" counts the number of elements in a given row of a matrix that are between 15
 * and 20 (inclusive).
 *
 * @param matriz A 2D array (matrix) of integers.
 * @param l The parameter "l" represents the row index of the matrix. It is used to specify which row
 * of the matrix we want to analyze.
 * @param c The parameter `c` represents the number of columns in the matrix.
 *
 * @return the number of elements in the specified row of the matrix that are between 15 and 20
 * (inclusive).
 */
int analise(int** matriz, int l, int c);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int l = 0, c = 0;
    // entrada
    printf("--Defina o tamanho da matriz a ser analisada.\n");
    printf("//Quantidade de linhas: ");
    scanf("%d", &l);
    printf("//Quanidade de Colunas: ");
    scanf("%d", &c);
    if (l <= 0 || c <= 0) {
        printf("**ERROR-Digite valores positvos não nulos.");
        return 0;
    }
    // definindo a matriz.
    int** Matriz_a = CreatMatrizInt(l, c);
    printf("--Digite os elementos da matriz: \n");
    for (int i = 0; i < l; i++) {
        printf("//Digite os %d elementos da linha %d\n", c, (i + 1));
        for (int j = 0; j < c; j++) {
            scanf("%d", &Matriz_a[i][j]);
        }
    }
    // saída
    for (int i = 0; i < l; i++)
        printf("--A quantidade de elementos da matriz na linha %d que são maiores que 15 e menores que 20 são: %d\n", i + 1, analise(Matriz_a, i, c));
    printf("--A média dos elementos pares da matriz é: %g\n", mediapar(Matriz_a, l, c));
    freedom(Matriz_a, l);
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
float mediapar(int** matriz, int l, int c) {
    int cont = 0, soma = 0;
    float media = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] % 2 == 0) {
                cont++;
                soma += matriz[i][j];
            }
            else
                continue;
        }
    }
    media = ((float)soma / (float)cont);
    return media;
}

int analise(int** matriz, int l, int c) {
    int cont = 0;
    for (int j = 0; j < c; j++) {
        if (matriz[l][j] >= 15 && matriz[l][j] <= 20)
            cont++;
    }
    return cont;
}