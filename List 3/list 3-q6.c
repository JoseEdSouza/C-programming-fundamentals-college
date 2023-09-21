/**
 * This C program takes a number as input and prints a sequence of numbers where each number is twice
 * the previous number plus one.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int n, i = 0, n1, n2 = 0;
    //entrada
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    //saída
    while (i < n) {
        n1 = n2;
        n2 = (n1 * 2) + 1;
        i++;
        printf("%d, ", n2);
    }
    return 0;
}