/**
 * This C program calculates and displays all possible teams that can be formed given a certain number
 * of people.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int n = 0, ne, ni;
    //entrada
    printf("Digite o número de pessoas: ");
    scanf("%i", &n);
    //saída 
    ne = n;
    ni = 1;
    printf("Possíveis Equipes: ");
    while (ni <= ne) {
        if (n % ne == 0) printf(" (%d x %d) ", ni, ne);
        ni++;
        ne = ((float)n / (float)ni);
    }
    return 0;
}
