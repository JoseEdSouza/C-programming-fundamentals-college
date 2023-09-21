/**
 * The program checks if a given string is a palindrome by reversing it and comparing it with the
 * original string.
 * 
 * @return The function `palindroma` returns an integer value. If the given string is a palindrome, it
 * returns 1. Otherwise, it returns 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/**
 * The function "inverso" takes a string "original" and reverses it, storing the result in the string
 * "inverso".
 * 
 * @param original A pointer to a character array that represents the original string.
 * @param inverso The `inverso` parameter is a pointer to a character array where the inverted string
 * will be stored.
 */
void inverso(char *original, char *inverso);
/**
 * The function "palindroma" checks if a given string is a palindrome by comparing it with its reverse.
 * 
 * @param string A pointer to a character array representing the original string.
 * @param inversa The parameter "inversa" is a pointer to a character array that represents the
 * reversed version of the input string.
 * 
 * @return an integer value. If the given string is a palindrome (i.e., it reads the same forwards and
 * backwards), the function will return 1. Otherwise, it will return 0.
 */
int palindroma(char *string, char *inversa);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    //*definifndo as strings
    char *string = (char*)malloc(100 * (sizeof(char)));
    char *inversa = (char*)malloc(100 * (sizeof(char)));
    //*entrada
    printf("//Digite uma palavra para saber se ela é palíndroma: ");
    fgets(string, 98, stdin);
    inverso(string, inversa);
    (palindroma(string, inversa)) ? (printf("\\\\A palavra é palíndroma.\n")) : (printf("\\\\A palavra não é palíndroma.\n"));
    free(string);
    free(inversa);
    return 0;
}


void inverso(char *original, char *inverso)
{
    for (int j = strlen(original) - 1, i = 0; inverso[i] || original[j]; j--, i++)
    {
        inverso[i] = '\0';
        if (original[j])
            inverso[i] = original[j];
    }
}


int palindroma(char *string, char *inversa)
{
    int cont = 0;
    while (*string!='\0')
    {
        if (*string == *inversa)
            cont++;
        string++;
        inversa++;
    }
    if (cont == strlen(string))
        return 1;
    else
        return 0;
}
