/**
 * The function `cifra` takes a string and an integer as input, and shifts each alphabetic character in
 * the string by the given integer value, wrapping around from 'Z' to 'A' or from 'z' to 'a' if
 * necessary.
 * 
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/**
 * The function `cifra` takes a string and an integer as input, and shifts each alphabetic character in
 * the string by the given integer value, wrapping around from 'Z' to 'A' or from 'z' to 'a' if
 * necessary.
 * 
 * @param string A pointer to a character array (string) that needs to be encrypted.
 * @param chave The parameter "chave" is an integer that represents the key or shift value used for the
 * Caesar cipher encryption. It determines how many positions each character in the string should be
 * shifted.
 */
void cifra(char *string, int chave);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char *string = (char*)malloc(100 * (sizeof(char)));
    int chave = 0;
    printf("//Digite o conte�do a ser codificado: ");
    fgets(string, 98, stdin);
    printf("//Digite a chave de codigo: ");
    scanf("%d", &chave);
    if (chave > 30 || chave < 0)
    {
        printf("**ERROR-Digite um valor postitivo até 30.\n");
        free(string);
        return 0;
    }
    cifra(string, chave);
    printf("\\\\A frase codificada é: ");
    puts(string);
    free(string);
    return 0;
}



void cifra(char *string, int chave)
{
    while (*string != '\0')
    {
        if (*string != ' ')
        {
            if (('A' <= (*string) && (*string) <= 'Z'))
            {
                if (('A' <= (*string + chave) && (*string + chave) <= 'Z'))
                    *string = *string + chave;
                else
                    *string = 'A' + ((*string + chave) - 'Z' - 1);
            }
            else if ('a' <= (*string) && (*string) <= 'z')
            {
                if ('a' <= (*string + chave) && (*string + chave) <= 'z')
                    *string = *string + chave;
                else
                    *string = 'a' + ((*string + chave) - 'z' - 1);
            }
            string++;
        }
    }
}