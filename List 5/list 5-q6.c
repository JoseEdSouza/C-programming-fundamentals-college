#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int cont = 0; // conta os elementos >= 7.
    int q = 0;    // recebe a quantidade de elemntos do vetor.
    // entrada
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &q);
    float* vetor = (float*) malloc(q * sizeof(float)); // vetor de 50 elementos na heap.
    if (q > 50 || q <= 0) {
        printf("**ERROR-Digite um valor até 50.\n");
        return 0;
    }
    printf("//Digite até 50 valores reais para saber quantos são maiores ou iguais a 7: \n");
    for (int i = 0; i < q; i++) {
        scanf("%f", &vetor[i]);
    }
    // operação
    for (int i = 0; i < q; i++) {
        (vetor[i] < 7) ? (cont += 0) : (cont++);
    }
    // saída
    printf("\\\\O total de elementos maiores ou iguais a 7 é: %d", cont);
    free(vetor);
    return 0;
}