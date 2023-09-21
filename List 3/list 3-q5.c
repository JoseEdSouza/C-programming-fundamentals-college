/**
 * This C program calculates the sum and average of a series of numbers entered by the user.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int n, i = 0, s = 0;
    float ma;
    //entrada
    printf("Digite n n�meros para saber a soma e a média(Para parar digite \"-1\"): \n");
    scanf("%d", &n);
    //operação
    while (n >= 0) {
        i++;
        scanf("%d", &n);
        if (n >= 0) {
            s = s + n;
        }
    }
    ma = (float)s / (float)i;
    //saída
    printf("Quantidade de n�meros = %d\nSoma = %d\nM�dia = %.2f\n", i, s, ma);
    return 0;
}

