/**
 * This C program calculates the average of two grades and determines if the student passed or failed
 * based on the average.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
        setlocale(LC_ALL, "Portuguese");
        //variáveis
        float n1, n2, m1, avf, mf;
        //entrada
        printf("Digite as notas da primeira e segunda avaliações: ");
        scanf("%f %f", &n1, &n2);
        //operação
        m1 = (n1 + n2) / 2;
        //sa�da
        if (m1 >= 7) { printf("Aprovado por m�dia."); }
        else {
                if (m1 < 7 && m1 >= 4) {
                        printf("Avaliação final\n") && printf("Digite a nota da AVF:");scanf("%f", &avf);mf = m1 + avf / 3;
                        if (mf >= 5) { printf("Aprovado por nota."); }
                        else { printf("Reprovado por nota."); }
                }
                else { printf("Reprovado por média."); }
        }
        return 0;
}