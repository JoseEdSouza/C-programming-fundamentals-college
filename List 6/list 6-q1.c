/**
 * The above code generates a random matrix of integers with a given number of rows and columns, and
 * then prints the matrix.
 * 
 * @return The function `RandomMatrix` is returning a pointer to a 2D array of integers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/**
 * The function RandomMatrix generates a random matrix of size i x j, with each element being a random
 * number between 1 and 60.
 * 
 * @param i The parameter `i` represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 * 
 * @return The function RandomMatrix is returning a pointer to a 2D array of integers.
 */
int **RandomMatrix(int i, int j);
/**
 * The function `PrintaMatrix` prints a 2D matrix of integers with `i` rows and `j` columns.
 * 
 * @param Matrix A pointer to a 2D array of integers.
 * @param i The parameter `i` represents the number of rows in the matrix.
 * @param j The parameter `j` represents the number of columns in the matrix.
 * 
 * WARNING the function calls freedom on Matrix
 */
void PrintaMatrix(int **Matrix, int i, int j);
/**
 * The function "freedom" frees the memory allocated for a 2D array.
 * 
 * @param _Memory _Memory is a pointer to a pointer to an integer. It is used to store a 2D array of
 * integers.
 * @param l The parameter "l" represents the length or size of the array "_Memory".
 */
void freedom(int** _Memory,int l);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int l = 0, c = 0;
    //entrada
    printf("--Defina o tamanho da matriz de elementos aleatórios.\n");
    printf("//Quantidade de linhas: ");
    scanf("%d", &l);
    printf("//Quanidade de Colunas: ");
    scanf("%d", &c);
    if(l<=0 || c<=0)
    {
        printf("**ERROR-Digite valores positvos não nulos.");
        return 0;
    }
    // sa�da
    printf("\\\\A matriz resultante é: \n");
    PrintaMatrix(RandomMatrix(l, c), l, c);
    return 0;
}


int **RandomMatrix(int i, int j)
{
    srand(time(NULL));
    int **matrix = (int**)malloc(i * (sizeof(int *)));
    for (int z = 0; z < i; z++)
    {
        matrix[z] = (int*)malloc(j * (sizeof(int)));
    }
    for (int l = 0; l < i; l++)
    {
        for (int c = 0; c < j; c++)
        {

            matrix[l][c] = rand()% 60 +1;
        }
    }
    return matrix;
}



void PrintaMatrix(int **Matrix, int i, int j)
{
    for (int l = 0; l < i; l++)
    {
        for (int c = 0; c < j; c++)
        {
            printf("%3d", Matrix[l][c]);
        }
        printf("\n");
    }
    freedom(Matrix,i);
}

void freedom(int** _Memory,int l)
{
    for(int i=0;i<l;i++)
    {
        free(_Memory[i]);
    }
    free(_Memory);
}