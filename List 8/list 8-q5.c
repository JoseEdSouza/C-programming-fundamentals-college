/**
 * The program takes an array of integers as input, finds the first prime number in the array, and
 * returns a pointer to that number.
 * 
 * @return The function `firstprimenumber` returns a pointer to the first prime number in the given
 * array `vetor`. If a prime number is found, a pointer to that number is returned. If no prime number
 * is found, a null pointer (0) is returned.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * The function `firstprimenumber` takes an array of integers and its size as input, and returns a
 * pointer to the first prime number in the array, or NULL if no prime number is found.
 * 
 * @param vetor An array of integers.
 * @param tam The parameter "tam" represents the size of the array "vetor".
 * 
 * @return The function `firstprimenumber` returns a pointer to the first prime number in the given
 * array `vetor`. If a prime number is found, a pointer to that number is returned. If no prime number
 * is found, a null pointer (0) is returned.
 */
int *firstprimenumber(int *vetor, int tam);
/**
 * The function "isitprime" checks if a given number is prime or not.
 * 
 * @param n The parameter `n` is an integer that represents the number to be checked for primality.
 * 
 * @return 1 if the given number is prime, and 0 if it is not prime.
 */
int isitprime(int n);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //* entrada
    int tam = 0;
    printf("//Digite a quantidade de elementos a ser analisada: ");
    scanf("%d", &tam);
    //* definindo o vetor
    int *vetor = (int*)malloc(tam * (sizeof(int)));
    printf("//Digite os %d elementos: ", tam);
    for (int j = 0; j < tam; j++)
    {
        scanf("%d", &(*(vetor + j)));
    }
    //* sa�da
    int* firstPrime = firstprimenumber(vetor,tam);
    printf("\\\\O primeiro elemento primo digitado é: %d [%p]\n", *firstPrime,firstPrime);
    free(vetor);
    free(firstPrime);
    return 0;
}



int isitprime(int n)
{
    int cont = 0;
    for (int i = n; i != 0; i--)
    {
        (n % i == 0) ? (cont++) : (cont += 0);
    }
    if (cont == 2)
        return 1;
    else
        return 0;
}



int *firstprimenumber(int *vetor, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (isitprime(*(vetor + i)))
            return &(*(vetor + i));
        else if (i == (tam - 1))
            return 0;
        else
            continue;
    }
}
