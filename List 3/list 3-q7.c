/**
 * This C program calculates the number of banknotes and coins needed to withdraw a given amount of
 * money.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    //variáveis
    int v, cont = 0, n1 = 0/*200*/, n2 = 0/*100*/, n3 = 0/*50*/, n4 = 0/*20*/, n5 = 0/*10*/, n6 = 0/*5*/, n7 = 0/*2*/, n8 = 0/*1*/;
    //entrada
    printf("Digite o valor desejado para sacar a vista: ");
    scanf("%d", &v);
    //operação
    while (v > 0) {
        if (v >= 200) {
            n1 = v / 200;
            v = v - (n1 * 200);
        }
        else if (v >= 100) {
            n2 = v / 100;
            v = v - (n2 * 100);
        }
        else if (v >= 50) {
            n3 = v / 50;
            v = v - (n3 * 50);
        }
        else if (v >= 20) {
            n4 = v / 20;
            v = v - (n4 * 20);
        }
        else if (v >= 10) {
            n5 = v / 10;
            v = v - (n5 * 10);
        }
        else if (v >= 5) {
            n6 = v / 5;
            v = v - (n6 * 5);
        }
        else if (v >= 2) {
            n7 = v / 2;
            v = v - (n7 * 2);
        }
        else if (v >= 1) {
            n8 = v / 1;
            v = v - (n8 * 1);
        }
    }
    //saída 
    if (v >= 0) {
        printf("%d notas de 200\n%d notas de 100\n%d notas de 50\n%d notas de 20\n", n1, n2, n3, n4);
        printf("%d notas de 10\n%d notas de 5\n%d notas de 2\n%d moedas de 1.\n", n5, n6, n7, n8);
    }
    else printf("Digite um valor válido.\n");
    return 0;
}
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese_Brazil");
//vari�veis
 int v,cont=0,n1=0/*200*/,n2=0/*100*/,n3=0/*50*/,n4=0/*20*/,n5=0/*10*/,n6=0/*5*/,n7=0/*2*/,n8=0/*1*/;
//entrada
 printf("Digite o valor desejado para sacar a vista: ");
 scanf("%d",&v);
//opera��o
 while(v>0){
  if (v>=200){
      n1 = v/200;
      v = v - (n1*200);
  }
  else if (v>=100){
      n2 = v/100;
      v = v - (n2*100);
  }
  else if (v>=50){
      n3 = v/50;
      v = v -(n3*50);
  }
  else if (v>=20){
      n4 = v/20;
      v = v - (n4*20);
  }
  else if (v>=10){
      n5 = v/10;
      v = v - (n5*10);
  }
  else if (v>=5){
      n6 = v/5;
      v = v -(n6*5);
  }
  else if (v>=2){
      n7 = v/2;
      v = v - (n7*2);
  }
  else if (v>=1){
      n8 = v/1;
      v = v - (n8*1);
  }
 } 
//sa�da 
 if (v>=0){
     printf("%d notas de 200\n%d notas de 100\n%d notas de 50\n%d notas de 20\n",n1,n2,n3,n4);
     printf("%d notas de 10\n%d notas de 5\n%d notas de 2\n%d moedas de 1.\n",n5,n6,n7,n8);
 }
 else printf("Digite um valor v�lido.\n");
return 0;
}
