/**
 * The program reads a string from the user, corrects it if necessary, and then passes it to a function
 * that prints the string, the fifth character, and modifies the first character.
 */
#include <stdio.h>
#include <string.h>

/**
 * The function passandoPorParametro takes a string as a parameter, prints the string and the fifth
 * character, and modifies the first character of the string.
 * 
 * @param string The parameter "string" is an array of characters.
 */
void passandoPorParametro(char string[]);

int main() {

  char palavra[30];

  // leitura usando fgets
  printf("digite uma frase com ate 29 caracteres: ");
  fgets(palavra, 30, stdin);
  printf("string com %d caracteres (inclui um \\n)\n", strlen(palavra));
  printf("fgets = %s.\n", palavra);
  palavra[strlen(palavra) - 1] = '\0'; //insere \0 no lugar do \n
  printf("fgets corrigido = %s.\n", palavra);

  //leitura usando scanf
  printf("digite uma frase at� 29 caracteres: ");
  scanf("%[^\n]", palavra);
  printf("string com %d caracteres\n", strlen(palavra));
  printf("scanf com formatador \"%%[^\\n]\" = %s.\n", palavra);

  //passando para uma funcao
  passandoPorParametro(palavra);

  //imprime string modificada
  printf("nova string %s.\n", palavra);

}


void passandoPorParametro(char string[]) {
  printf("a string passado por parametro foi: %s.\n", string);
  printf("o quinto caractere eh %c.\n", string[4]);
  string[0] = 'M'; //modifica o primeiro caractere
}
