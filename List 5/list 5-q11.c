/**
 * The above code is a C program that takes two arrays of integers as input, finds the common elements
 * between them without repetitions, and returns an array containing those common elements.
 *
 * @return The function `comum` returns a dynamically allocated integer array that contains the common
 * elements between the two input arrays, without any repetitions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* The line `int n = 0, m = 0;` is declaring and initializing two variables `n` and `m` of type `int`
 with initial values of 0. These variables are used to store the sizes of the two input arrays. */
int n = 0, m = 0;

/* The line `int cont = 0;` is declaring and initializing a variable `cont` of type `int` with an
initial value of 0. This variable is used to count the number of common elements between the two
input arrays without repetitions. */
int cont = 0;


/**
 * The function "comum" takes two arrays of integers as input and returns an array containing the
 * common elements between the two arrays without repetitions.
 *
 * @param n1 An array of integers representing the first set of numbers.
 * @param n2 The parameter `n2` is a pointer to an array of integers.
 *
 * WARNING the function calls free for n1 and n2.
 *
 * @return a dynamically allocated integer array that contains the common elements between the two
 * input arrays, without any repetitions.
 */

int* comum(int* n1, int* n2);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // entrada
    printf("//Digite o tamanho do primeiro vetor até 20: ");
    scanf("%d", &n);
    printf("//Digite o tamanho do segundo vetor até 20: ");
    scanf("%d", &m);
    if (n > 20 || n <= 0 || m > 20 || m <= 0) {
        printf("**ERROR-Digite valores positivos até 20.");
        return 0;
    }
    int* vetor_a = (int*)malloc(n * (sizeof(int)));
    int* vetor_b = (int*)malloc(m * (sizeof(int)));
    int* vetor_c = (int*)malloc(cont * (sizeof(int)));
    printf("//Digite os %d elementos do primeiro vetor: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor_a[i]);
    }
    printf("//Digite os %d elementos do segundo vetor: \n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &vetor_b[i]);
    }
    // opera��o
    vetor_c = comum(vetor_a, vetor_b);
    // sa�da
    printf("//O(s) elemento(s) em comum é(são): \n");
    for (int i = 0, p = 0; i < cont; i++) {
        if (p == 0) {
            printf("\\\\ ");
            p++;
        }
        printf("%d \\ ", vetor_c[i]);
    }
    free(vetor_c);
    return 0;
}



int* comum(int* n1, int* n2) {
    int* analise = (int*)malloc(m * (sizeof(int))); // analisa se um n�mero que pertence � ambos os vetores j� foi contado e guarda a posi��o dele.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (n1[i] == n2[j]) {
                if (analise[j] != 1) {
                    analise[j]++;
                    cont++;
                    break;
                }
            }
            else if (analise[j] != 1)
                analise[j] = 0;
        }
    }
    int* retorno = (int*)malloc(cont * (sizeof(int))); // recebe os números em comum sem repetições.
    for (int i = 0, j = 0; i < m; i++) {
        if (analise[i] == 1) {
            retorno[j] = n2[i];
            j++;
        }
    }
    free(analise);
    free(n1);
    free(n2);
    return retorno;
}