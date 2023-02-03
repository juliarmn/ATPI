#include <stdio.h>
#include <string.h>
int main(void) {
  char nome[60], count;
  printf("digite seu nome completo\n");
  gets(nome);
  count = strlen(nome);
  printf("%c. ", nome[0]);
  for (int i = 0; i < count; i++) {
    if (nome[i] == 32) {
      printf("%c. ", nome[i + 1]);
    }
  }
  return 0;
}
