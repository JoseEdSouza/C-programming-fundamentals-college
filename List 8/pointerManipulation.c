#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void escrevaEm(float *num);
void escrevaNoPonteiro(float **num);

int main()
{

  int inteiro;
  float real;
  char palavra[40] = "palavra qualquer";
  int vetor[12] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
  int matriz[4][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};

  // Ponteiros podem apontar para variaveis e vetores jah declarados

  // declaracao de uma variavel cujo tipo eh "ponteiro para int"
  int *ponteiroParaInteiro;

  // atribuindo um endereco de inteiro a um ponteiro
  ponteiroParaInteiro = &inteiro;

  // vamos guardar um valor na variavel inteira
  inteiro = 567;

  // imprimindo as variaveis
  printf("ponteiroParaInteiro (endereco de memoria) = %d\n", ponteiroParaInteiro);
  printf("inteiro' = %d\n", inteiro);
  printf("*ponteiroParaInteiro = %d\n", *ponteiroParaInteiro);

  // outro ponteiro declarado e inicializado
  float *ponteiroParaReal = &real;
  // escrevendo na variavel usando o ponteiro
  *ponteiroParaReal = 123.45;

  // imprimindo as variaveis
  printf("ponteiroParaReal (endereco de memoria) = %d\n", ponteiroParaReal);
  printf("real = %f\n", real);
  printf("*ponteiroParaReal = %f\n", *ponteiroParaReal);

  // guardando o ponteiro para um vetor eh simples
  char *ponteiroParaChar = palavra;
  // vamos mexer na string usando o ponteiro
  strcat(palavra, " com adicional");
  // a linha abaixo emite um warning, sem problemas
  printf("ponteiroParaChar (endereco de memoria) = %d\n", ponteiroParaChar);
  printf("palavra = %s\n", palavra);
  printf("ponteiroParaChar = %s\n", ponteiroParaChar);
  // acesso as posicoes do vetor usando ponteiros
  //   eh igual quando usa o vetor original
  printf("ponteiroParaChar[3] = %c\n", ponteiroParaChar[3]);

  // manipulando o valor do ponteiro para percorrer um vetor
  int *p = vetor;
  printf("valor na primeira posicao (*p) = %d (end. de mem = %d)\n", *p, p);
  p++; // modificar o valor do endereco de memoria, pulando para o proximo
  printf("valor na segunda posicao (*p) = %d (end. de mem = %d)\n", *p, p);

  // essa variavel eh um "vetor de ponteiros para int"
  int *ponteiroParaVetorInt[4];
  ponteiroParaVetorInt[0] = matriz[0];
  ponteiroParaVetorInt[1] = matriz[1];
  ponteiroParaVetorInt[2] = matriz[2];
  ponteiroParaVetorInt[3] = matriz[3];
  // alteracao de celulas
  ponteiroParaVetorInt[2][2] = 999;
  ponteiroParaVetorInt[1][1] = 555;
  // imprimir valores dos ponteiros (compilacao emite warning)
  printf("ponteiroParaVetorInt[0] = %d\n", ponteiroParaVetorInt[0]);
  printf("ponteiroParaVetorInt[1] = %d\n", ponteiroParaVetorInt[1]);
  printf("ponteiroParaVetorInt[2] = %d\n", ponteiroParaVetorInt[2]);
  printf("ponteiroParaVetorInt[3] = %d\n", ponteiroParaVetorInt[3]);
  // imprimir matriz usando o ponteiro
  for (int l = 0; l < 4; l++)
  {
    for (int c = 0; c < 3; c++)
    {
      printf("%4d ", ponteiroParaVetorInt[l][c]);
    }
    printf("\n");
  }

  // Outro metodo de acessar matriz com ponteiros
  int *p_matriz = &matriz;
  // calcule a posicao na memoria com base no numero de colunas
  //  e os indices que deseja acessar
  int NCOLS = 3; // numero de colunas da matriz
  printf("p_matriz[2*NCOLS+2] == matriz[2][2] == %d\n", p_matriz[2 * NCOLS + 2]);

  // usando ponteiros como parametros de funcoes
  float real2 = 9.9;
  printf("real2 = %f\n", real2);
  escrevaEm(&real2); // o endereço de 'real2' eh passado por parametro
  printf("real2 = %f (apos passagem por parametro)\n", real2);

  // ponteiros para ponteiros (hein?) podem armazenar
  // o endereco de memoria de um ponteiro
  float valor = 13.99;
  float *p_simples;
  float **p_duplo;
  p_simples = &valor;
  p_duplo = &p_simples;
  printf("valor via variavel = %f\n", valor);
  printf("valor via ponteiro = %f\n", *p_simples);
  printf("valor via ponteiro duplo = %f\n", **p_duplo);

  // ao passar um ponteiro simples para uma funcao, o valor
  // original pode ser alterado. ao passar um ponteiro duplo,
  // tanto o valor original como o valor do ponteiro simples
  // podem ser alterados.
  escrevaNoPonteiro(p_duplo);
  printf("valor via variavel = %f\n", valor);
  printf("valor via ponteiro = %f\n", *p_simples);
  printf("valor via ponteiro duplo = %f\n", **p_duplo);

  // alocacao de memoria simples
  int *numero = (int *)malloc(sizeof(int)); // espaco p/ 1 inteiro
  free(numero);                             // liberando memoria alocada
  // alocacao de vetor
  numero = (int *)malloc(10 * sizeof(int)); // espaco p/ 10 inteiros
  free(numero);                             // liberando memoria alocada

  // METODO #1 para alocacao de matriz em espaco contiguo
  int n_linhas = 3;
  int n_colunas = 5;
  // aloca todo o espaco conjugado
  numero = (int *)malloc(n_linhas * n_colunas * sizeof(int));
  // inicializa a memoria nova com valor fixo
  memset(numero, 0, n_linhas * n_colunas * sizeof(int));
  // escrita usando a formula = linha*n_colunas + coluna
  numero[1 * n_colunas + 1] = 44;

  // Outro metodo de acesso a um espaco conjugado
  int(*m)[5] = (int(*)[5]) & numero[0];
  printf("m[0][0] = %d\n", m[0][0]);
  printf("m[1][1] = %d\n", m[1][1]);

  // METODO #2 para alocacao de matriz em vetor de ponteiros
  int **pp_matriz;
  n_linhas = 3;
  n_colunas = 5;
  // aloca o vetor de ponteiros
  pp_matriz = (int **)malloc(n_linhas * sizeof(int *));
  // aloca cada linha
  for (int i = 0; i < n_linhas; i++)
  {
    pp_matriz[i] = (int *)malloc(n_colunas * sizeof(int));
  }
  // acesso semelhante a matriz
  pp_matriz[1][1] = 55;
  printf("valor de pp_matriz = %d\n", pp_matriz);
  printf("valor de pp_matriz[1] = %d\n", pp_matriz[1]);
  printf("valor em pp_matriz[1][1] = %d\n", pp_matriz[1][1]);
}

void escrevaEm(float *num)
{
  // '*num' acessa a variavel original
  *num = 10.9;
}

void escrevaNoPonteiro(float **num)
{
  // modifica valor original
  // a expressao '**num' realiza duas operacoes de desreferenciamento
  // recupera o ponteiro p/ ponteiro, e depois o ponteiro p/ variavel
  **num = 29.01;
  // aloca nova memoria para guardar um float, e
  // guarda no ponteiro simples
  *num = (float *)malloc(sizeof(float));
  // modifica valor da nova memoria
  **num = 34.56;
}
