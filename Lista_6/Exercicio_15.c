#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
/*Dada a matriz B (100 x 200), escrever um programa para calcular a soma dos elementos da quadragésima
coluna e a soma dos valores da trigésima linha.*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int B[100][200], somaColuna = 0, somaLinha = 0;
  srand(time(NULL));
  for (int i = 0; i < 100; i++) {
    printf("\n");
    for (int j = 0; j < 200; j++) {
      B[i][j] = rand() % 10;
    }
  }
  for (int i = 0; i < 100; i++) {
    somaColuna += B[i][40];
    somaLinha += B[30][i];
  }
  printf("\nSoma da quadragésima coluna=%d", somaColuna);
  printf("\nSoma da trigésima linha=%d", somaLinha);
  return 0;
}
