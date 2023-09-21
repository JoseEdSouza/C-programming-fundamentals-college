/**
 * This C program converts a given time in seconds to minutes and hours.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
//variáveis 
int main() {
    float s, m, h;
    //entrada
    printf("digite tempo em segundos: ");
    scanf("%f", &s);
    //formulas
    m = s / 60;
    h = s / 3600;
    //saida
    printf("minutos= %f\n", m);
    printf("horas= %f\n", h);
    
    return 0;
}