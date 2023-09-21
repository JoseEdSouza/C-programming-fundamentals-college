/**
 * This program takes in student information such as ID, grades, and final exam grade, calculates the
 * average grade, and determines if the student passed or failed.
 * 
 * @return The main function returns an integer value, which is 0 in this case. The media function
 * returns a pointer to a float array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matriz.h"

/**
 * The function InputMatrizNotas takes in a matrix, the number of rows and columns, and prompts the
 * user to input student information suach as ID, grades, and final exam grade, calculates the average
 * grade, and determines if the student passed or failed.
 *
 * @param Matriz A 2D array of floats representing the matrix of grades.
 * @param l The parameter "l" represents the number of rows in the matrix, which corresponds to the
 * number of students.
 * @param c The parameter `c` represents the number of columns in the matrix.
 */
void InputMatrizNotas(float** matriz, int l, int c);
/**
 * The function "PrintaSit" prints the situation of a class, including the matrix of grades, the
 * average grades, and the status of each student.
 *
 * @param matriz A 2D array representing the situation of the class. Each row represents a student, and
 * each column represents a different aspect of their situation (e.g., student ID, grades, average,
 * status).
 * @param media The `media` parameter is a pointer to a float array that contains the average values
 * for each student in the class.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter `c` represents the number of columns in the matrix.
 *
 * WARNING the function calls free on media.
 */
void PrintaSit(float** matriz, float* media, int l, int c);
/**
 * The function calculates the average of positive values in each column of a given matrix and returns
 * an array of these averages.
 *
 * @param matriz A 2D array of floats representing a matrix.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 *
 * @return a pointer to a float array.
 */
float* media(float** matriz, int l, int c);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // vari�veis
    int l = 0; // recebem a quantidade de discentes
    // entrada
    printf("--Digite a quantidade de discentes: ");
    scanf("%d", &l);
    if (l <= 0) {
        printf("**ERROR-Digite uma quantidade válida.\n");
        return 0;
    }
    // definindo a matriz
    float** FUP = CreatMatrizFloat(l, 7);
    InputMatrizNotas(FUP, l, 7);
    // sa�da
    printf("\\\\A situação da turma é: \n");
    PrintaSit(FUP, media(FUP, l, 7), l, 7);
    freedom((int**)FUP, l);
    return 0;
}



void InputMatrizNotas(float** Matriz, int l, int c) {
    for (int i = 0; i < l; i++) {
        float par1 = 0;
        printf("//Digite a matricula do discente: ");
        scanf("%f", &Matriz[i][0]);
        printf("//Digite as 3 notas do discente: ");
        for (int j = 1; j < 4; j++) {
            scanf("%f", &Matriz[i][j]);
            par1 += Matriz[i][j];
        }
        float mediaA = (par1 / 3);
        if (mediaA < 7) {
            printf("//Digite a nota da avaliação final do discente: ");
            scanf("%f", &Matriz[i][4]);
            mediaA = ((mediaA + Matriz[i][4]) / 2);
            Matriz[i][5] = mediaA;
            (mediaA >= 5) ? (Matriz[i][6] = 1) : (Matriz[i][6] = 0);
        }
        else {
            Matriz[i][4] = (-1);
            Matriz[i][5] = mediaA;
            Matriz[i][6] = 1;
        }
    }
}



float* media(float** matriz, int l, int c) {

    float* media = (float*)malloc(6 * (sizeof(float)));
    for (int j = 1, w = 0; j < 7; j++, w++) {
        float cont = 0;
        float par = 0;
        for (int i = 0; i < l; i++) {
            if (matriz[i][j] >= 0) {
                cont++;
                par += matriz[i][j];
            }
        }
        if (cont > 0)
            media[w] = (par / cont);
        else
            media[w] = 0;
    }
    return media;
}


void PrintaSit(float** matriz, float* media, int l, int c) {
    printf(" MAT      N1      N2      N3      AVF     MEDIA   STATUS      \n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < 7; j++) {
            if (j == 0)
                printf("%d  ", (int)matriz[i][j]);
            else if (j == 1)
                printf("%.2f", matriz[i][j]);
            else if (j == 4)
                (matriz[i][j] >= 0) ? (printf("%7.2f", matriz[i][j])) : (printf("  APROVADO"));
            else if (j == 6)
                (matriz[i][j] == 0) ? (printf("  REPROVADO")) : (printf("  APROVADO"));
            else
                printf("%8.2f", matriz[i][j]);
        }
        printf("\n");
    }
    printf("MEDIA   ");
    for (int i = 0; i < 6; i++) {
        if (i == 0)
            printf("%.2f", media[i]);
        else if (i == 3)
            printf("%7.2f", media[i]);
        else if (i == 4)
            printf("%11.2f", media[i]);
        else if (i == 5)
            printf("%8.2f %%", (media[i] * 100));
        else
            printf("%8.2f", media[i]);
    }
    free(media);
}
