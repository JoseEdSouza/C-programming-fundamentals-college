/**
 * This C program calculates the sum of all numbers between 0 and 200 that are divisible by 3 but not
 * divisible by 7.
 * 
 * @return The program is returning the sum of all numbers between 0 and 200 that are divisible by 3
 * but not divisible by 7.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    for (int i = 0;i <= 200;i++) {
        if (i % 3 == 0 && i % 7 != 0) n = n + i;
    }
    printf("A soma é: %d", n);
    return 0;
}

