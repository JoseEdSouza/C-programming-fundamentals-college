/**
 * This C program allows two players to play a game of rock-paper-scissors and determines the winner.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main() {
  //variaveis
  int a, b;
  //entrada
  printf("Pedra= 0\nTesoura= 1\nPapel= 2\n");
  printf("Digite a jogada de A e B (pedra,papel ou tesoura): ");
  scanf("%i %i", &a, &b);
  //saida
  if ((a == 0 && b == 0) || (a == 2 && b == 2) || (a == 1 && b == 1)) { printf("EMPATE."); }
  else {
    if ((a == 0 && b == 1) || (a == 2 && b == 0) || (a == 1 && b == 2)) { printf("A ganhou."); }
    else {
      if ((b == 0 && a == 1) || (b == 2 && a == 0) || (b == 1 && a == 2)) { printf("B ganhou."); }
      else {
        if ((a != 0) || (a != 2) || (a != 1) || (b != 0) || (b != 2) || (b != 1)) { printf("ERROR: Digite pedra,papel ou tesoura."); }
      }
    }
  }
  return 0;
}