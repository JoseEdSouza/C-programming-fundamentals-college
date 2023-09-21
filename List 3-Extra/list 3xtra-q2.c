/**
 * This is a simple rock-paper-scissors game implemented in C.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    // variáveis
    char jp;
    int jcpu = 0;
    // operação
    while (jp != 'f' || jp != 'F')
    {
        jcpu = rand() % 3;
        printf("*****************************\n");
        printf("Insira um comando:\nr = pedra.\nt = tesoura.\np = papel.\nf para fechar o programa.\n");
        printf("*****************************\n");
        scanf("%s", &jp);
        if (jp == 'f' || jp == 'F')
        {
            printf("Tchau.\nAt� a pr�xima :)\n");
            break;
        }
        else if (((jp == 't' || jp == 'T') && jcpu == 1) || ((jp == 'p' || jp == 'P') && jcpu == 0) || ((jp == 'r' || jp == 'R') && jcpu == 2))
            printf("Jogador ganhou, Insira outro comando.\n");
        else if (((jp == 't' || jp == 'T') && jcpu == 2) || ((jp == 'p' || jp == 'P') && jcpu == 1) || ((jp == 'r' || jp == 'R') && jcpu == 0))
            printf("Empate, Insira outro comando.\n");
        else if (((jp == 't' || jp == 'T') && jcpu == 0) || ((jp == 'p' || jp == 'P') && jcpu == 2) || ((jp == 'r' || jp == 'R') && jcpu == 1))
            printf("CPU ganhou, Insira outro comando.\n");
        else
            printf("**ERROR-Digite um comando válido.\nTente novamente.\n");
    }
    return 0;
}
