/**
 * This C program takes 10 input values and determines the number of even numbers among them.
 * 
 * @return The program is returning the number of even numbers entered by the user.
 */
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10]; // vetor que recebe os valores
    int par[10];   // recebe os números pares do vetor, as demais posições recebem -1.
    int cont = 0;  // conta os números >=0 de par[10]
    // entrada
    printf("//Digite 10 valores para saber os n�meros pares entre eles: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            par[i] = vetor[i];
            continue;
        }
        else
        {
            par[i] = (-1);
            continue;
        }
    }
    // operação
    for (int i = 0; i < 10; i++)
    {
        if (par[i] >= 0)
            cont++;
    }
    // saída
    printf("\\\\foi/foram recebido(s) %d número(s) par(es).\n", cont);
    return 0;
}