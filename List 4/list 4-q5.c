/**
 * The program calculates the cumulative sum of numbers from 1 to n based on user input.
 * 
 * @return The function `sigma` returns the cumulative sum of all the numbers from 1 to `n`.
 */
#include <stdio.h>
#include <locale.h>

/**
 * The function calculates the sum of all numbers from 1 to n and returns the cumulative sum.
 * 
 * @param n The parameter "n" is an integer that represents the number to be added to the running sum.
 * 
 * @return the sum of all the numbers from 1 to n.
 */
int sigma(int n);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int n = 0, i = 0, o = 1;
    // operação
    while (o != 0)
    {
        if (i == 0)
        {
            printf("--Digite um número para começar o somatório: ");
            scanf("%d", &n);
            i++;
        }
        else
        {
            printf("--Deseja continuar? (sim=1/não=0): ");
            scanf("%d", &o);
            if (o == 0)
            {
                printf("//o somatório final é: %d\n", sigma(n));
                break;
            }
            else if (o != 1)
            {
                printf("**ERRO:opção inválida.\n");
                continue;
            }
            printf("\\\\Digite outro número para adicionar o somatório: ");
            scanf("%d", &n);
        }
        printf("//O somatório atual é: %d\n", sigma(n));
    }
    return 0;
}



int sigma(int n)
{
    static int save = 0; // vari�vel estática  p/ salvar o somatório.
    save = save + n;
    return save;
}