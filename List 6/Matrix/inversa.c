/**
 * This C program calculates the inverse of a square matrix.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"
#include <math.h>

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int o = 0, determinante = 0;
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
    determinante = det(matriz, o);
    if (determinante == 0)
    {
        printf("\\\\A matriz não é inversível.\n");
        
        ;
        return 0;
    }
    printf("\\\\A matriz inversa %dX%d é: \n", o, o);
    PrintMatrizfloat(Inversa(matriz, o), o, o);
    freedom(matriz, o);
    return 0;
}
