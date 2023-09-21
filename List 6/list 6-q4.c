/**
 * This program takes user input to create a matrix, finds the largest and smallest elements in the
 * matrix along with their positions, and then prints the results.
 * 
 * @return The main function returns an integer value, which is 0 in this case. The functions `Maior`
 * and `Menor` return a pointer to an integer array, and the function `CreatMatrizInt` returns a
 * pointer to a pointer to an integer.
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
 * The function "Maior" takes a matrix, its dimensions, and returns an array containing the largest
 * element in the matrix and its indices.
 * 
 * @param Matriz A 2D array of integers representing the matrix.
 * @param l The parameter `l` represents the number of rows in the matrix.
 * @param c The parameter `c` represents the number of columns in the matrix.
 * 
 * @return a pointer to an integer array where the 0 index represents the MAX element, 1 the line, 2 the column
 */
int *Maior(int **matriz, int l, int j);
/**
 * The function "Menor" takes a matrix, its dimensions, and returns an array containing the largest
 * element in the matrix and its indices.
 * 
 * @param Matriz A 2D array of integers representing the matrix.
 * @param l The parameter `l` represents the number of rows in the matrix.
 * @param c The parameter `c` represents the number of columns in the matrix.
 * 
 * @return a pointer to an integer array where the 0 index represents the MIN element, 1 the line, 2 the column
 */
int *Menor(int **matriz, int l, int j);
/**
 * The function "Saida" prints the largest and smallest elements of a matrix, along with their
 * respective positions, and then frees the memory allocated for the arrays storing these values.
 * 
 * @param maior A pointer to an integer array that represents the largest element in a matrix. The
 * array has three elements:
 * @param menor The parameter "menor" is a pointer to an integer array.
 * 
 * WARNING the function calls free on maior and menor.
 */
void Saida(int *maior, int *menor);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int l = 0, c = 0;
    // entrada
    printf("--Defina o tamanho da matriz a ser analisada.\n");
    printf("//Quantidade de linhas: ");
    scanf("%d", &l);
    printf("//Quanidade de Colunas: ");
    scanf("%d", &c);
    if (l <= 0 || c <= 0)
    {
        printf("**ERROR-Digite valores positvos não nulos.");
        return 0;
    }
    // definindo a matriz.
    int **Matriz_a = CreatMatrizInt(l, c);
    printf("--Digite os elementos da matriz: \n");
    for (int i = 0; i < l; i++)
    {
        printf("//Digite os %d elementos da linha %d\n", c, (i + 1));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &Matriz_a[i][j]);
        }
    }
    // sa�da
    Saida(Maior(Matriz_a, l, c), Menor(Matriz_a, l, c));
    freedom(Matriz_a, l);
    return 0;
}


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
        Matriz[cont] = (int*)malloc(j * sizeof(int));
    return Matriz;
}

int *Maior(int **Matriz, int l, int c)
{
    int *retorno = malloc(3 * (sizeof(int)));
    for (int i = 0, cont = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cont == 0)
            {
                retorno[0] = Matriz[0][0];
                for (int z = 1; z < 3; z++)
                    retorno[z] = 0;
                cont++;
            }
            else if (retorno[0] < Matriz[i][j])
            {
                retorno[0] = Matriz[i][j];
                retorno[1] = i;
                retorno[2] = j;
            }
            else
                continue;
        }
    }
    return retorno;
}

int *Menor(int **Matriz, int l, int c)
{
    int *retorno = malloc(3 * (sizeof(int)));
    for (int i = 0, cont = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (cont == 0)
            {
                retorno[0] = Matriz[0][0];
                for (int z = 1; z < 3; z++)
                    retorno[z] = 0;
                cont++;
            }
            else if (retorno[0] > Matriz[i][j])
            {
                retorno[0] = Matriz[i][j];
                retorno[1] = i;
                retorno[2] = j;
            }
            else
                continue;
        }
    }
    return retorno;
}



void Saida(int *maior, int *menor)
{
    printf("\\\\O maior elemento da matriz �: %d\n", maior[0]);
    printf("--Linha %d, coluna %d.\n", maior[1] + 1, maior[2] + 1);
    printf("\\\\O menor elemento da matriz �: %d\n", menor[0]);
    printf("--Linha %d, coluna %d.\n", menor[1] + 1, menor[2] + 1);
    free(maior);
    free(menor);
}