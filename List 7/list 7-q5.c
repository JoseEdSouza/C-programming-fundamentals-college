/**
 * The program counts the number of occurrences of a given letter in a string and returns the positions
 * where the letter occurs in the string.
 * 
 * @return The `contaletra` function returns the count of occurrences of a specific letter in a given
 * string. The `letter_position` function returns a pointer to an array of integers that represents the
 * positions where the letter occurs in the string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>
#include <ctype.h>

/**
 * The function `contaletra` counts the number of occurrences of a given letter in a string,
 * case-insensitively.
 * 
 * @param string A pointer to a character array (string) that contains the text to be searched.
 * @param letra The parameter "letra" is a character that represents the letter we want to count in the
 * string.
 * 
 * @return the count of occurrences of a specific letter in a given string.
 */
int contaletra(char* string, char letra);
/**
 * The function "letter_position" takes a string and a letter as input, and returns an array of
 * positions where the letter occurs in the string.
 * 
 * @param string A pointer to a character array (string) that contains the input string.
 * @param letra The parameter "letra" is a character that represents the letter we are searching for in
 * the string.
 * 
 * @return a pointer to an array of integers.
 */
int* letter_position(char* string, char letra);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    char letra[1];
    char* string = (char*)malloc(100 * (sizeof(char)));
    printf("//Digite o conteúdo a ser codificado: ");
    fgets(string, 98, stdin);
    printf("//Digite um caractere: ");
    scanf("%s", &(*(letra)));
    int* posicao = letter_position(string, *(letra));
    if (posicao == NULL)
        return 1;
    printf("\\\\A(s) posição/posições que a(s) letra(s) aparece(m) é/são: ");
    for (int i = 0; *(posicao + i) != '\0'; i++) {
        if (*(posicao + i) >= 0)
            printf("%d, ", *(posicao + i));
        else
            printf("\n");
    }
    free(posicao);
    free(string);
    return 0;
}



int contaletra(char* string, char letra) {
    int cont = 0;
    while (*string != '\0') {
        (tolower(*string) == tolower(letra)) ? (cont++) : (cont += 0);
        string++;
    }
    return cont;
}


int* letter_position(char* string, char letra) {
    int numOccurrences = contaletra(string, letra);
    int* position = (int*)malloc((numOccurrences + 1) * sizeof(int));

    if (position == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    int z = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == tolower(letra)) {
            position[z] = (i + 1);
            z++;
        }
    }

    if (z == 0) {
        free(position);
        return NULL; // No occurrences found
    }

    // Add a sentinel value to indicate the end of positions
    position[z] = -1;

    return position;
}
