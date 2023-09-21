/**
 * This is a quiz program about Harry Potter where the user answers multiple-choice questions and
 * receives a result based on their score.
 * 
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>
#include<locale.h>
int main() {
     setlocale(LC_ALL, "Portuguese");
     //variáveis
     int r1, r2, r3, r4, t;
     char q1[0], q2[0], q3[0], q4[0];
     //entrada
     printf("*********************************************************\n");
     printf("--------------------QUIZ HARRY POTTER--------------------\n");
     printf("~Escolha entre a,b,c,d a resposta das perguntas a seguir.\n");
     printf("---------------------------------------------------------\n");
     printf("*********************************************************\n");
     //quest�o 1
     printf("1- A que casa pertencia Harry Potter e seus amigos?\na) Hufflepuff\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
     printf("Digite sua respota: ");
     scanf(" %c", &q1[0]);
     if ((q1[0] == 'd') || (q1[0] == 'D')) { r1 = 1; }
     else { r1 = 0; }
     //quest�o 2
     printf("2- Qual o verdadeiro nome do personagem o qual o conhecido por aquele que não deve ser nomeado?\na) Tom hiddle\nb) Draco Malfoy\nc) Bellatrix Lestrange\nd) Pedro Pettigrew\n");
     printf("Digite sua respota: ");
     scanf(" %c", &q2[0]);
     if ((q2[0] == 'a') || (q2[0] == 'A')) { r2 = 1; }
     else { r2 = 0; }
     //quest�o 3
     printf("3- Qual das opções NÃO é uma reliquia da morte?\na) A varinha do sabugueiro\nb) A pedra da ressurei��o\nc) Pedra filosofal\nd) A capa da invisibilidade\n");
     printf("Digite sua respota: ");
     scanf(" %c", &q3[0]);
     if ((q3[0] == 'c') || (q3[0] == 'C')) { r3 = 1; }
     else { r3 = 0; }
     //quest�o 4
     printf("4- O ministério da magia proibiu o uso de 3 feitiços, conhecidos como as maldições imperdoáveis, por elas possuírem car�ter maligno e um objetivo cruel.\nMarque a opção abaixo que não corresponde a uma dessas maldições.\na) Crucio\nb) Imperio\nc) Avada Kedrava\nd) Expecto Patronum\n");
     printf("Digite sua respota: ");
     scanf(" %c", &q4[0]);
     if ((q4[0] == 'd') || (q4[0] == 'D')) { r4 = 1; }
     else { r4 = 0; }
     //sa�da
     t = r1 + r2 + r3 + r4;
     printf("*********************************************************\n");
     printf("------------------------RESULTADO------------------------\n");
     if (t == 4) { printf("Super fã!!!\n"); }
     else {
          if (t == 3)printf("F�!\n");
          else {
               if (t == 2) { printf("Interessado no assunto.\n"); }
               else {
                    if (t == 1) { printf("j� ouviu falar.\n"); }
                    else { printf("Nunca assitiu.\n"); }
               }
          }
     }
     printf("---------------------------------------------------------\n");
     
     return 0;
}