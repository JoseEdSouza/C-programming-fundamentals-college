/**
 * The code contains several string manipulation functions such as calculating the length of a string,
 * copying a string, concatenating two strings, reversing a string, and comparing two strings.
 * 
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * The function "tam" calculates the length of a given string.
 *
 * @param string A pointer to a constant character array (string)
 *
 * @return the length of the string.
 */
int tam(const char* string);
/**
 * The function `ctrlC_ctrlV_` copies the contents of the `original` string to the `copia` string.
 *
 * @param original A pointer to the original string that needs to be copied.
 * @param copia The parameter "copia" is a pointer to a character array that will store the copied
 * string.
 */
void ctrlC_ctrlV_(char* original, char* copia);
/**
 * The function `concatena` concatenates the string `origem` to the end of the string `destino`.
 *
 * @param origem A pointer to the character array that contains the source string to be concatenated.
 * @param destino The `destino` parameter is a pointer to a character array that represents the
 * destination string where the concatenated string will be stored.
 */
void concatena(char* origem, char* destino);
/**
 * The function "inverso" takes a string "original" and reverses it, storing the result in the string
 * "inverso".
 *
 * @param original A pointer to a character array that represents the original string.
 * @param inverso The `inverso` parameter is a pointer to a character array where the inverted string
 * will be stored.
 */
void inverso(char* original, char* inverso);
/**
 * The function "comapra" compares two strings and returns -1 if the first string is smaller, 1 if the
 * second string is smaller, and 0 if they are equal.
 *
 * @param string_1 A pointer to the first character of the first string to be compared.
 * @param string_2 The parameter `string_2` is a pointer to a character array (string) that you want to
 * compare with `string_1`.
 *
 * @return an integer value. If string_1 is less than string_2, it returns -1. If string_1 is greater
 * than string_2, it returns 1. If string_1 is equal to string_2, it checks if either string has
 * reached the end ('\0'). If not, it continues to the next character. If both strings have reached the
 * end
 */
int compara(char* string_1, char* string_2);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("//Digite duas frases: ");
    char* string = (char*)malloc(100 * sizeof(char));
    fgets(string, 98, stdin);
    char* string_2 = (char*)malloc(100 * sizeof(char));
    fgets(string_2, 98, stdin);
    printf("\\\\seus tamanhos são: %d %d %d\n", tam(string), tam(string_2), compara(string, string_2));
    concatena(string, string_2);
    puts(string_2);
    inverso(string, string_2);
    puts(string_2);
    ctrlC_ctrlV_(string, string_2);
    puts(string_2);
    free(string_2);
    free(string);
    return 0;
}


int tam(const char* string) {
    int cont = 0;
    while (string[cont] != '\0' && string[cont] != '\n') {
        cont++;
    }
    return cont;
}



void ctrlC_ctrlV_(char* original, char* copia) {
    while (*original != '\0' || *copia != '\0') {
        *copia = '\0';
        if (*original != '\0')
            *copia = *original;
        original++;
        copia++;
    }
}


void concatena(char* origem, char* destino) {
    int tamanho = tam(destino), i = 0;
    while (i <= tam(origem) + 1) {
        if (*(origem + i) != '\0')
            *(destino + tamanho + i) = *(origem + i);
        else
            *(destino + tamanho + i) = '\0';
        i++;
    }
}


void inverso(char* original, char* inverso) {
    for (int j = tam(original) - 1, i = 0; inverso[i] || original[j]; j--, i++) {
        inverso[i] = '\0';
        if (original[j] != '\0')
            inverso[i] = original[j];
    }
}


int compara(char* string_1, char* string_2) {
    while (*string_1 != '\0' && *string_2 != '\0') {
        if (*string_1 < *string_2)
            return -1;
        else if (*string_1 > *string_2)
            return 1;
        else {
            if (*string_1 != '\0' || *string_2 != '\0') {
                string_1++;
                string_2++;
                continue;
            }
            else
                return 0;
        }
    }
    return 0;
}