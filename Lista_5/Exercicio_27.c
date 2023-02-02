#include <locale.h>
#include <stdio.h>
#define tamanho 110

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  char str[tamanho];
  int ASCII[128], i = 0, j = 0;
  printf("Escreva uma string: \n");
  scanf("%[^\n]s", str);
  for (i = 0; i < 128; i++) {
    ASCII[i] = 0;  // inicializar o vetor Ascii de modo que não haja lixo de memória, todos os valores inciciais=0
  }
  return 0;
}
