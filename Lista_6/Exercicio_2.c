#include <stdio.h>
#define N 5
/*Construa um programa que contém uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os
demais elementos. Escreva ao final a matriz obtida.*/
int main(void) {
  int A[N][N], i = 0, j = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        A[i][j] = 1;
      } else {
        A[i][j] = 0;
      }
    }
  }
  for (i = 0; i < 5; i++) {
    printf("\n");
    for (j = 0; j < 5; j++) {
      printf(" [%d] ", A[i][j]);
    }
  }
  return 0;
}
