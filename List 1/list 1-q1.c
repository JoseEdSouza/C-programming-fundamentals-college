/**
 * This C program converts a temperature in Celsius to Fahrenheit.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main(){
    float c;
    float f;
    printf("digite a temperatura em celsius: ");
    scanf("%f", &c);
    printf("esse e o valor inserido: %f\n", c);
    f = (c*1.8) + 32 ; 
    printf("esse e o valor da temperatura em fahrenheit: %f\n", f);
    system ("pause");
    return 0;
}
