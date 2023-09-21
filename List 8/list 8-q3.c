/**
 * The function "menormaior" finds the smallest and largest values in an array and stores them in the
 * variables pointed to by "maior" and "menor" respectively.
 *
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/**
  * The function "menormaior" finds the smallest and largest values in an array and stores them in the
  * variables pointed to by "maior" and "menor" respectively.
  *
  * @param vetor A pointer to an array of integers.
  * @param tam The parameter "tam" represents the size of the array "vetor". It indicates the number of
  * elements in the array.
  * @param maior A pointer to an integer variable that will store the value of the largest element in
  * the array.
  * @param menor A pointer to an integer variable that will store the smallest value in the array.
  */
void menormaior(int* vetor, int tam, int* maior, int* menor);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    //* entrada
    int maior = 0;
    int menor = 0;
    int tam = 0;
    printf("//Digite a quantidade de elementos a ser analisada: ");
    scanf("%d", &tam);
    //* definindo o vetor
    int* vetor = (int*)malloc(tam * (sizeof(int)));
    printf("//Digite os %d elementos: ", tam);
    for (int j = 0; j < tam; j++) {
        scanf("%d", &vetor[j]);
    }

    menormaior(vetor, tam, &maior, &menor);

    printf("\\\\O maior elemento �: %d\n\\\\O menor elemento é: %d", *(&maior), *(&menor));
    free(vetor);
    return 0;
}



void menormaior(int* vetor, int tam, int* maior, int* menor) {
    int M = 0, m = 0;
    for (int i = 0; i < tam; i++) {
        if (i == 0) {
            M = *(vetor + i);
            m = *(vetor + i);
            continue;
        }
        if (*(vetor + i) > M) {
            M = *(vetor + i);
        }
        if (*(vetor + i) < m) {
            m = *(vetor + i);
        }
    }
    *maior = M;
    *menor = m;
}