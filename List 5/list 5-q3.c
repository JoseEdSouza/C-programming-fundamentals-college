/**
 * This C program takes 10 input values and prints the positive numbers among them.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10]; // vetor que recebe os valores
    int plus[10];  // recebe os números positivos do vetor, as demais posições recebem 0.
    // entrada
    printf("//Digite 10 valores para saber os n�meros positivos entre eles: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0)
        {
            plus[i] = vetor[i];
            continue;
        }
        else
        {
            plus[i] = (0);
            continue;
        }
    }
    // saída
    printf("\\\\O(s) positvo(s) entre eles �(s�o): \n");
    for (int i = 0; i < 10; i++)
    {
        if (plus[i] > 0)
            printf("%d; ", plus[i]);
    }
    return 0;
}