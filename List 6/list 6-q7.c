/**
 * The function checks if a given matrix is symmetric by comparing it with its transpose.
 *
 * @return The main function returns an integer value, which is 0 in this case.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"

 /**
  * The function checks if a given matrix is symmetric by comparing it with its transpose.
  *
  * @param matriz A 2D array representing the matrix.
  * @param l The parameter "l" represents the number of rows in the matrix.
  * @param c The parameter `c` represents the number of columns in the matrix.
  */
void SimetriaInt(int** matriz, int l, int c);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // variaveis
    int o = 0;
    // entrada
    printf("--Defina a ordem da matriz: ");
    scanf("%d", &o);
    if (o <= 0) {
        printf("**ERROR-Digite valores positvos n�o nulos.\n");
        return 0;
    }
    // definindo a matriz
    int** matriz = CreatMatrizInt(o, o);
    InputMatrizInt(matriz, o, o);
    // opera��o
    printf("\\\\A matriz transposta �: \n");
    PrintMatrizInt(TransMatrizInt(matriz, o, o), o, o);
    SimetriaInt(matriz, o, o);
    freedom(matriz, o);
    return 0;
}



void SimetriaInt(int** matriz, int l, int c) {
    int cont = 0; // conta a quantidade de elementos iguais da matriz com sua transposta.
    int** transposta = TransMatrizInt(matriz, l, c);
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            (matriz[i][j] == transposta[i][j]) ? (cont++) : (cont += 0);
        }
    }
    if (cont == (l * c))
        printf("\\\\A matriz � sim�trica.\n");
    else
        printf("\\\\A matriz n�o � sim�trica.\n");
    freedom(transposta, l);
}