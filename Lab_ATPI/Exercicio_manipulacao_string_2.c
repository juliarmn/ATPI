#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[40], sobrenome[60], str[100];
  int soma;
  printf("Digite seu nome\n");
  gets(nome);
  printf("Digite seu sobrenome\n");
  gets(sobrenome);
  strcat(nome, sobrenome);
  strcpy(str, nome);
  printf("\n%s\n", str);
  printf("\n%c\n", str[0]);
  soma = strlen(str);
  for (int i = 0; i < soma; i++) {
    if (str[i] == 32) {
      soma--;
    }
    printf("QUANTIDADE DE LETRAS:");
    printf("\n%d", soma);
    system("PAUSE");
    return 0;
  }
