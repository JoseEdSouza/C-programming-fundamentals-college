/**
 * This C program calculates the nth term of the Fibonacci sequence.
 * 
 * @return The program is returning 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    unsigned long long n = 0, n2 = 0, n1 = 1, na = 0, cont = 0;
    //entrada
    printf("Digite um termo da sequência de fibonacci: ");
    scanf("%lld", &n);
    //operação
    while (cont < n) {
        n2 = n1;
        n1 = na;
        na = n1 + n2;
        cont++;
        printf("\\termo %lld, %lld\n", cont, na);
    }
    //saída
    printf("**O %lld° termo é: %lld.\n", n, na);
    printf("****************************************************************\n");
    return 0;
}