/**
 * The function `StrFormat` takes a string as input and capitalizes the first letter of the string and
 * converts the rest of the letters to lowercase, while also capitalizing the first letter of each
 * word.
 * 
 * @return The main function returns an integer value of 0, indicating successful execution of the
 * program. The StrFormat function does not return any value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
#include <ctype.h>

/**
 * The function StrFormat takes a string as input and capitalizes the first letter of the string and
 * converts the rest of the letters to lowercase, while also capitalizing the first letter of each
 * word.
 * 
 * @param string The parameter "string" is a pointer to a character array (string) that needs to be
 * formatted.
 */
void StrFormat(char *string);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char *string = (char*)malloc(100 * (sizeof(char)));
    printf("//Digite a frase a ser formatada: ");
    fgets(string, 98, stdin);
    StrFormat(string);
    printf("\\\\A string formatada é: ");
    puts(string);
    free(string);
    return 0;
}



void StrFormat(char *string)
{
    *string = toupper(*string);
    string++;
    for (int i = 0; *(string + i); i++)
    {
        if (*(string + i) != ' ')
        {
            if (*(string + i - 1) == ' ')
            {
                *(string + i) = toupper(*(string + i));
            }
            else
                *(string + i) = tolower(*(string + i));
        }
        else
            continue;
    }
}
