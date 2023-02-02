#include <stdio.h>
/*Escreva um programa em linguagem C para que usuário digite um nome. A entrada deve ser
armazenada em uma variável nome, declarada com 40 caracteres. Em seguida, o programa deve
percorrer a string nome e apresentar cada letra em uma linha. O programa deve percorrer a string
somente até a última letra do nome. Ao final, o programa deverá apresentar também o total de
algarismos existentes.*/
#define size 41
int main(void) {
  char nome[size];
  int i = 0;
  printf("\nDigite o seu nome");
  scanf("%[^\n]", nome);
  while (nome[i] != '\0') {
    printf("\n%c", nome[i]);
    i++;
  }
  printf("\nA quantidade de caracteres é %d", i);
  return 0;
}
