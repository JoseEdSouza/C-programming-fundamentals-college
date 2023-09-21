/**
 * The code calculates the determinant of a matrix and prints the matrix and its determinant.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "matriz.h"
// fun��es

int det(int **matriz, int o);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int o = 0;
    // entrada
    printf("--Defina a ordem da matriz: ");
    scanf("%d", &o);
    if (o <= 0)
    {
        printf("**ERROR-Digite valores positvos não nulos.\n");
        return 0;
    }
    // definindo a matriz
    int **matriz = CreatMatrizInt(o, o);
    InputMatrizInt(matriz, o, o);
    printf("\\\\O determinate da matriz é: %i\n", det(matriz, o));
    printf("\\\\A matriz %iX%i inserida é: \n", o, o);
    PrintMatrizInt(matriz, o, o);
    return 0;
}
