/**
 * The program takes an array of integers, a size, and a multiplier as input, and returns a new array
 * where each element is the corresponding element in the original array multiplied by the multiplier.
 * 
 * @return The function "Convert" returns a pointer to an array of integers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/**
 * The function "Convert" takes an array of integers, a size, and a multiplier as input, and returns a
 * new array where each element is the corresponding element in the original array multiplied by the
 * multiplier.
 *
 * @param n An array of integers that we want to convert.
 * @param tam The parameter "tam" represents the size of the array "n". It indicates the number of
 * elements in the array.
 * @param multi The "multi" parameter is an integer value that represents the multiplier. It is used to
 * multiply each element in the array "n" by this value.
 *
 * @return a pointer to an array of integers.
 */
int* Convert(int* n, int tam, int multi);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int n = 0;
    int tamanho = 0; // recebe o tamanho do vetor.(até 30)
    // entrada
    printf("//Digite a quantidade de números a serem multiplicados:  ");
    scanf("%d", &tamanho);
    if (tamanho > 30 || tamanho < 0) {
        printf("**ERROR-Digite um valor até 30.");
        return 0;
    }
    int* vetor = (int*)malloc(tamanho * (sizeof(int)));
    printf("//Digite os %d elementos: \n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("//Digite o multiplicador: ");
    scanf("%d", &n);
    // operação
    int* new = Convert(vetor, tamanho, n);
    free(vetor);
    vetor = new;
    if (vetor == NULL) {
        return 1;
    }
    // saída
    printf("\\\\Os elementos multiplicados são: \n");
    for (int i = 0, cont = 0; i < tamanho; i++) {
        if (cont == 0) {
            printf(" / ");
            cont++;
        }
        printf("%d / ", vetor[i]);
    }
    free(vetor);
    return 0;
}


int* Convert(int* n, int tam, int multi) {
    int* retorno = (int*)malloc(tam * (sizeof(int)));
    if (retorno == NULL) {
        // Handle memory allocation failure
        return NULL;
    }
    for (int i = 0; i < tam; i++) {
        retorno[i] = n[i] * multi;
    }
    return retorno;
}