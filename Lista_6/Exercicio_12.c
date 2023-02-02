#include <stdio.h>
/*Construa um programa para ler uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela
possui.Os resultados são armazenados em uma terceira matriz.*/
int main(void) {
  int A[4][4], C[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Digite o elemento da matriz na linha %d e coluna %d\n", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (A[i][j] > 10) {
        C[i][j] = A[i][j];
      } else {
        C[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    printf("\n\n");
    for (int j = 0; j < 4; j++) {
      printf(" %d ", A[i][j]);
    }
  }
  for (int i = 0; i < 4; i++) {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      printf(" %d ", C[i][j]);
    }
  }
  return 0;
}
