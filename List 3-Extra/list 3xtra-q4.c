/**
 * This is a C program that generates a random number between 0 and 100 and asks the user to guess it,
 * providing feedback on whether the guess is too high or too low, and finally giving a classification
 * based on the number of attempts made.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    //variíveis
    int n = 0, cont = 0;
    int s = rand() % 101;
    //operação
    while (n != s) {
        printf("*****************************************\n");
        printf("Tente advinhar o número entre 0 e 100: ");
        scanf("%i", &n);
        if (n > s) {
            cont++;
            printf("Errou, é menor.\n");
            continue;
        }
        else if (n < s) {
            cont++;
            printf("Errou, é maior.\n");
            continue;
        }
        else printf("Acertou!\n");
    }
    //sa�da
    printf("Classificação: ");
    if (cont >= 1 && cont <= 3) printf("Muita sorte!\n");
    else if (cont >= 4 && cont <= 6) printf("Sorte!\n");
    else if (cont >= 7 && cont <= 10) printf("Normal.\n");
    else printf("Azar :(\n");
    printf("*****************************************\n");
    return 0;
}