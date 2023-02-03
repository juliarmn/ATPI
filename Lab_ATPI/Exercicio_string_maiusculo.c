#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  char nome[81], nomeMaiusculo[81];
  int i = 0;
  printf("Digite seu nome\n");
  gets(nome);
  do {
    nomeMaiusculo[i] = toupper(nome[i]);
    i++;
  } while (i != '\0');
  printf("\n\t______ NOME MAIÚSCULO ______\t\n");
  printf(" %s", nomeMaiusculo);
  system("PAUSE");
  return 0;
}
