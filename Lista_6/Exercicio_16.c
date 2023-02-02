#include <stdio.h>
/*Dada uma matriz A com dimensões 2 x 3, conforme indicado abaixo, imprima a matriz transposta de A.*/
int main(void) {
  int A[2][3] = {
      {9, 16, 34},
      {32, 11, 17},
  },
      B[3][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      B[j][i] = A[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 2; j++) {
      printf(" %d ", B[i][j]);
    }
  }
  return 0;
}
