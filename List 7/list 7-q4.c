/**
 * The function "Conta_Vogais" counts the number of vowels in a given string.
 * 
 * @return The function `Conta_Vogais` returns the number of vowels in the given string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/**
 * The function "Conta_Vogais" counts the number of vowels in a given string.
 * 
 * @param string A pointer to a character array (string) that contains the input string.
 * 
 * @return the number of vowels in the given string.
 */
int Conta_Vogais(char *string);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char *string = (char*) malloc(100 * (sizeof(char)));
    printf("//Digite uma frase: ");
    fgets(string, 98, stdin);
    printf("\\\\O número de vogais é: %d\n", Conta_Vogais(string));
    free(string);
    return 0;
}


int Conta_Vogais(char *string)
{
    int cont = 0;
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while (*string!='\0')
    {
        for (int i = 0; i < 10; i++)
        {
            if (*string == vogais[i])
            {
                cont++;
                break;
            }
            else
                continue;
        }
        string++;
    }
    return cont;
}