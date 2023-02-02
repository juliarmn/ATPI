#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Faça um programa que gere números aleatórios entre 0 e 100 para preencher as posições de duas matrizes
com dimensões 4 x 4. As matrizes devem ser nomeadas como A e B. Uma matriz C deve receber, em
cada posição, o maior elemento nas posições correspondentes de A e B. Apresente as matrizes.*/
int main(void) {
  int A[4][4], B[4][4], C[4][4], i, j;
  srand(time(NULL));
  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      A[i][j] = rand() % 100;
      B[i][j] = rand() % 100;
      printf(" A[%d][%d]->%d ", i + 1, j + 1, A[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      printf(" B[%d][%d]->%d ", i + 1, j + 1, B[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    printf("\n");
    for (j = 0; j < 4; j++) {
      if (A[i][j] > B[i][j]) {
        C[i][j] = A[i][j];
      } else {
        C[i][j] = B[i][j];
      }
      printf(" B[%d][%d]->%d ", i + 1, j + 1, B[i][j]);
    }
  }
  return 0;
}
