/**
 * The program determines whether a given number is even or odd and prints the corresponding message.
 * 
 * @param r The parameter "r" is an integer that represents a number.
 * 
 * @return The function `paridade` returns the result of the function call `saida(r)`.
 */
#include <stdio.h>
#include <locale.h>
// funções

/**
 * The function "saida" determines if a given number is even or odd and prints the corresponding
 * message.
 * 
 * @param r The parameter "r" is an integer that represents a number.
 * 
 * @return an integer value of 0.
 */
int saida(int r)
{
    if (r == 0)
        printf("O número é par.\n");
    else
        printf("O n�mero é Impar.\n");
    return 0;
}

/**
 * The function "paridade" calculates the parity of a given number and returns the result.
 * 
 * @param n An integer value that represents the number for which we want to determine the parity.
 * 
 * @return the result of the function call "saida(r)".
 */
int paridade(int n)
{
    int r;
    r = n % 2;
    return saida(r);
}

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    // variáveis
    int n;
    // entrada
    printf("Digite um n�mero para saber sua paridade: ");
    scanf("%d", &n);
    // saída
    paridade(n);
    return 0;
}