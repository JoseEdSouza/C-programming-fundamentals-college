/**
 * The function "Maior_Num_Array" takes two arrays and their sizes as input, and returns a pointer to
 * the element with the highest value between the two arrays.
 * 
 * @return The function "Maior_Num_Array" returns a pointer to the element with the largest value
 * between the two input arrays.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 * The function "Maior_Num_Array" takes two arrays and their sizes as input, and returns a pointer to
 * the element with the highest value between the two arrays.
 * 
 * @param Array_a An array of integers (Array_a)
 * @param tam_a The parameter "tam_a" represents the size of the array "Array_a". It indicates the
 * number of elements in the array "Array_a".
 * @param Array_b Array_b is a pointer to an array of integers.
 * @param tam_b The parameter "tam_b" represents the size of the array "Array_b".
 * 
 * @return a pointer to the element with the largest value between the two input arrays.
 */
int *Maior_Num_Array(int *Array_a, int tam_a, int *Array_b, int tam_b);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int na = 0;
    int nb = 0;
    int *ptr;
    //*entrada
    printf("//Digite o numero de elementos do primeiro vetor: ");
    scanf("%d", &na);
    printf("//Digite o numero de elementos do segundo vetor: ");
    scanf("%d", &nb);
    //?definindo os vetores
    int *vetor_a = (int*)malloc(na * (sizeof(int)));
    int *vetor_b = (int*)malloc(nb * (sizeof(int)));
    printf("//Digite os %d elementos do primeiro vetor: ", na);
    for (int i = 0; i < na; i++)
    {
        scanf("%d", &vetor_a[i]);
    }
    printf("//Digite os %d elementos do segundo vetor: ", nb);
    for (int j = 0; j < nb; j++)
    {
        scanf("%d", &(vetor_b[j]));
    }
    //*saida
    printf("\\\\O maior valor digitado é: %d", *Maior_Num_Array(vetor_a, na, vetor_b, nb));
    free(vetor_a);
    free(vetor_b);
    return 0;
}



int *Maior_Num_Array(int *Array_a, int tam_a, int *Array_b, int tam_b)
{
    int Maior_a = 0;
    int Maior_b = 0;
    int *Pmaior_a;
    int *Pmaior_b;
    for (int i = 0; i < tam_a; i++)
    {
        if (*Array_a > Maior_a)
        {
            Maior_a = *Array_a;
            Pmaior_a = &(*Array_a);
        }
        *Array_a++;
    }
    for (int i = 0; i < tam_b; i++)
    {
        if (*Array_b > Maior_b)
        {
            Maior_b = *Array_b;
            Pmaior_b = &(*Array_b);
        }
        *Array_b++;
    }
    if (*Pmaior_a > *Pmaior_b)
        return Pmaior_a;
    else
        return Pmaior_b;
}