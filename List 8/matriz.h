/* The above code is a header file named "matriz.h" that contains several functions related to matrix
operations. These functions include: */

#ifndef MATRIZ_H
#define MATRIZ_H

/**
 * The function "freedom" frees the memory allocated for a 2D array.
 *
 * @param _Memory _Memory is a pointer to a pointer to an integer. It represents a dynamically
 * allocated 2D array.
 * @param l The parameter "l" represents the length or size of the memory array.
 */
void freedom(int **_Memory, int l);
/**
 * The function CreatMatrizInt creates a 2D integer matrix of size i x j.
 *
 * @param i The parameter "i" represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 *
 * @return a pointer to a pointer to an integer, which represents a dynamically allocated matrix of
 * integers.
 */
int **CreatMatrizInt(int i, int j);
/**
 * The function `PrintMatrizInt` prints a 2D matrix of integers with a specified number of rows and
 * columns.
 * 
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 * 
 * WARNING the function calls freedom on Matriz
 */
void PrintMatrizInt(int **Matriz, int l, int c);
/**
 * The function receives a matrix and its size and inputs the elements of the matrix.
 * 
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 */
void InputMatrizInt(int **Matriz, int l, int c);
/**
 * The function CreatMatrizFloat creates a 2D integer matrix of size i x j.
 *
 * @param i The parameter "i" represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 *
 * @return a pointer to a pointer to an float, which represents a dynamically allocated matrix of
 * Float.
 */
float **CreatMatrizFloat(int i, int j);
/**
 * The function `PrintMatrizFloat` prints a 2D matrix of floats with a specified number of rows and
 * columns.
 * 
 * @param Matriz A pointer to a 2D array of floats.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 * 
 * WARNING the function calls freedom on Matriz
 */
void PrintMatrizfloat(float **Matriz, int l, int c);
/**
 * The function TransMatrizInt takes a matrix as input and returns its transpose.
 * 
 * @param matriz A 2D integer matrix of size l x c.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter `c` represents the number of columns in the matrix.
 * 
 * @return a pointer to a 2D integer array, which represents the transposed matrix.
 */
int **TransMatrizInt(int **matriz, int l, int c);
/**
 * The function SubMatriz takes a matrix, its dimensions, and a specific row and column, and returns a
 * submatrix by excluding the specified row and column.
 * 
 * @param matriz A 2D integer array representing the original matrix.
 * @param o The parameter "o" represents the order or size of the square matrix. It indicates the
 * number of rows and columns in the matrix.
 * @param l The parameter "l" represents the row index of the element in the matrix that you want to
 * exclude from the submatrix.
 * @param c The parameter `c` represents the column index of the element in the matrix that you want to
 * exclude in the submatrix.
 * 
 * @return a pointer to a 2D integer array, which represents the submatrix.
 */
int **SubMatriz(int **matriz, int o, int l, int c);
/**
 * The function calculates the determinant of a square matrix using recursion.
 * 
 * @param matriz The parameter "matriz" is a pointer to a pointer of integers, representing a 2D
 * matrix.
 * @param o The parameter `o` represents the order or size of the square matrix `matriz`.
 * 
 * @return the determinant of the input matrix.
 */
int det(int **matriz, int o);
/**
 * The function takes a matrix and its order as input, and returns the inverse of the matrix.
 * 
 * @param matriz A matrix of integers.
 * @param o The parameter "o" represents the order of the matrix. It indicates the number of rows and
 * columns in the matrix.
 * 
 * @return a float pointer to a 2D array, which represents the inverse of the input matrix.
 */
float **Inversa(int **matriz, int o);
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
int **MultipliMatriz(int **Matriz_a, int la, int ca, int **Matriz_b, int lb, int cb);


#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void freedom(int **_Memory, int l)
{
    for (int i = 0; i < l; i++)
    {
        free(_Memory[i]);
    }
    free(_Memory);
}


int **CreatMatrizInt(int i, int j)
{
    int **Matriz = (int**)malloc(i * (sizeof(int *)));
    for (int cont = 0; cont < i; cont++)
        Matriz[cont] =(int*) malloc(j * sizeof(int));
    return Matriz;
}


float **CreatMatrizFloat(int i, int j)
{
    float **Matriz = (float**)malloc(i * (sizeof(float *)));
    for (int cont = 0; cont < i; cont++)
        Matriz[cont] = (float*)malloc(j * sizeof(float));
    return Matriz;
}


void InputMatrizInt(int **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        printf("//Digite os %d elementos da linha %d\n", c, (i + 1));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }
}


void PrintMatrizInt(int **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d", Matriz[i][j]);
        }
        printf("\n");
    }
    freedom(Matriz, l);
}


void PrintMatrizfloat(float **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%10.3g", Matriz[i][j]);
        }
        printf("\n");
    }
    freedom((int **)Matriz, l);
}


int **TransMatrizInt(int **matriz, int l, int c)
{
    int **transposta = CreatMatrizInt(l, c);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }
    return transposta;
}

int **SubMatriz(int **matriz, int o, int l, int c)
{
    int **submatriz = CreatMatrizInt(o - 1, o - 1);
    for (int i = 0, w = 0; i < o; i++)
    {
        if (i == (l - 1))
            continue;
        else
        {
            w++;
            for (int j = 0, z = 0; j < o; j++)
            {
                if (j == (c - 1))
                    continue;
                else
                {
                    z++;
                    submatriz[w - 1][z - 1] = matriz[i][j];
                }
            }
        }
    }
    return submatriz;
}

int det(int **matriz, int o)
{
    int r = 0;
    if (o == 1)
    {
        r = matriz[0][0];
        return r;
    }
    else if (o == 2)
    {
        r = ((matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]));
        return r;
    }
    else
    {
        for (int i = 0, j = 0; j < o; j++)
        {
            r += (matriz[i][j] * (pow((-1), (i + j + 2))) * det(SubMatriz(matriz, o, 1, j + 1), (o - 1)));
        }
        return r;
    }
}

float **Inversa(int **matriz, int o)
{
    float determinante = (float)det(matriz, o);
    int **MatrizCof = CreatMatrizInt(o, o); // matriz dos cofatores.
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            MatrizCof[i][j] = ((pow((-1), (i + j + 2))) * det(SubMatriz(matriz, o, i + 1, j + 1), (o - 1)));
        }
    }
    int **adjunta = TransMatrizInt(MatrizCof, o, o); // matriz adjunta (transposta da matriz dos cofatores)
    float **inversa = CreatMatrizFloat(o, o);        // recebe a adjunta multiplicada pelo o inverso do determinate.
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            inversa[i][j] = (float)(1.00 / determinante) * (float)adjunta[i][j];
        }
    }
    freedom(adjunta, o);
    freedom(MatrizCof, o);
    return inversa;
}

int **MultipliMatriz(int **Matriz_a, int la, int ca, int **Matriz_b, int lb, int cb)
{
    int **resultado = CreatMatrizInt(la, cb);
    for (int i = 0; i < la; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            resultado[i][j] = 0;
            for (int w = 0; w < ca; w++)
            {
                resultado[i][j] += (Matriz_a[i][w] * Matriz_b[w][j]);
            }
        }
    }
    return resultado;
}

#endif