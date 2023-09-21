/**
 * This C program calculates the arithmetic mean of three numbers entered by the user.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
int main(){
    float n1;
    float n2;
    float n3;
    float ma;
    printf("digite n1: ");
    scanf("%f", &n1);
    printf("digite n2: ");
    scanf("%f", &n2);
    printf("digite n3: ");
    scanf("%f", &n3);
    ma = (n1 + n2 + n3)/3;
    printf("a media aritmetica deles e: %f\n", ma);
    system ("pause");
    return 0;
}