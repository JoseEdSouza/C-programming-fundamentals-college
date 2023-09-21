/**
 * This C program generates and prints 6 random numbers between 1 and 60.
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
    //variáveis
    int n = 0;
    //saída
    printf("Seus números são: \n");
    for (int i = 0; i < 6; i++) {
        n = rand() % 60 + 1;
        printf("%d ", n);
    }
    return 0;
}