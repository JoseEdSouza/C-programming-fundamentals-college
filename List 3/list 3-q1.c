/**
 * This C program prints all odd numbers from 0 to 250.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    for (int i = 0;i < 250;i++) {
        if (i % 2 != 0) printf("\\%d\n", i);
    }
    return 0;
}