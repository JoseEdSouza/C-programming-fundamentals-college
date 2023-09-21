/**
 * The function "Convert" takes an array of integers as input, creates a new array of the same size,
 * and populates it with the elements of the input array in reverse order before returning it.
 * 
 * @return The function `Convert` returns a pointer to an integer array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * The function "Convert" takes an array of integers as input, creates a new array of the same size,
 * and populates it with the elements of the input array in reverse order before returning it.
 *
 * @param n1 The parameter `n1` is a pointer to an array of integers.
 *
 * WARNING the function calls free on n1.
 *
 * @return a pointer to an integer array.
 */
int* Convert(int* n1);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int* vetor_a = (int*)malloc(20 * (sizeof(int)));
    // entrada
    printf("//Digite os 10 elementos do vetor: \n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor_a[i]);
    }
    // operação
    vetor_a = Convert(vetor_a);
    // saída
    printf("\\\\Os elementos reordenados são: \n");
    for (int i = 0, cont = 0; i < 20; i++) {
        if (cont == 0) {
            printf("// ");
            cont++;
        }
        printf("%d / ", vetor_a[i]);
    }
    free(vetor_a);
    return 0;
}

int* Convert(int* n1) {
    int* vetor_b = (int*)malloc(20 * (sizeof(int)));
    for (int i = 0; i < 20; i++) {
        vetor_b[i] = n1[19 - i];
    }
    free(n1);
    return vetor_b;
}