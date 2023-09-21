/**
 * This C program takes input from the user to determine the size of an array, fills the array with
 * numbers, and then prints the array in either direct or reverse order based on user input.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    // entrada
    int n = 0; // define o tamanho do vetor.
    setlocale(LC_ALL, "Portuguese");
    printf("//Digite a quantidade de números impressos: ");
    scanf("%d", &n);
    // variáveis
    if (n <= 20) {
        int* vetor = (int*)malloc(n * sizeof(int));
        int cod = 0;
        printf("//Digite os n�meros: \n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }
        printf("//Digite como deseja a impressão (1=ordem direta / 2=ordem inversa): \n");
        scanf("%d", &cod);
        // saída
        if (cod != 1 && cod != 2) {
            printf("**ERROR-Digite um código válido.\n");
        }
        else {
            printf("\\\\A impressão é: \n");
            if (cod == 1) {
                for (int i = 0; i < n; i++) {
                    printf("--%d", vetor[i]);
                }
            }
            else if (cod == 2) {
                for (int i = 0; i < n; i++) {
                    printf("--%d", vetor[(n - 1) - i]);
                }
            }
        }
        free(vetor);
    }
    else
        printf("**ERROR-Digite um número até 20.\n");

    return 0;
}