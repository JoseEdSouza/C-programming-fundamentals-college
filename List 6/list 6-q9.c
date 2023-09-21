/**
 * The function "pascal" generates a Pascal's triangle of size "o" and returns it as a 2D array.
 * 
 * @return The function "pascal" returns a pointer to a 2D integer array, which represents the Pascal's
 * triangle.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"


/**
 * The function "pascal" generates a Pascal's triangle of size "o" and returns it as a 2D array.
 * 
 * @param o The parameter "o" represents the number of rows in the Pascal's triangle.
 * 
 * @return a pointer to a 2D integer array, which represents the Pascal's triangle.
 */
int **pascal(int o);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int o = 0;
    // entrada
    printf("--Defina a atá que linha do triângulo de pascal será exibida: ");
    scanf("%d", &o);
    if (o <= 0)
    {
        printf("**ERROR-Digite valores positvos não nulos.\n");
        return 0;
    }
    // sa�da
    PrintMatrizInt(pascal(o), (o + 1), (o + 1));
    return 0;
}



int **pascal(int o)
{
    int **pascal = CreatMatrizInt(o + 1, o + 1); // matriz do tri�ngulo de pascal.
    for (int i = 0; i < (o + 1); i++)            // zerando a matriz
    {
        for (int j = 0; j < (o + 1); j++)
        {
            pascal[i][j] = 0;
        }
    }
    for (int i = 0; i < o + 1; i++)
    {
        for (int j = 0; j < o + 1; j++)
        {
            if (j == 0)
                pascal[i][j] = 1; // garante que o primeiro e o ultimo elemento de cada linha sejam 1.
            else if (j != 0 && i != 0)
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    return pascal;
}       