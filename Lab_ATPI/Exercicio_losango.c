#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int linhas, meio, espaco, x = 1, j = 0;
  char k = 32;
  do {
    printf("\nDigite o número de linhas do losango, lembre que deve ser ímpar\n");
    scanf("%d", &linhas);
  } while (linhas % 2 == 0);
  meio = (linhas - 1) / 2;        // descobrir o meio do losango---> parte de cima
  espaco = ((meio - 1) * 4) / 2;  // quantos espaços terá
  for (int i = 0; i < linhas; i++) {
    for (j = 0; j < espaco + 1; j++) {
      printf("\t\t%c", k);
    }
    for (j = 0; j < x; j++) {
      printf("X");
    }
    printf("\n");
    if (i < meio) {
      x += 4;
      espaco -= 2;
    } else {
      x -= 4;
      espaco += 2;
    }
  }
  // system("PAUSE");
  return 0;
}
