#include <stdio.h>
/*Construa um programa para preencher uma matriz 4 x 4 com o produto do valor da linha e da coluna de
cada elemento. Em seguida, imprima na tela a matriz.*/
int main(void) {
  int M[4][4];
  for (int i = 1; i <= 4; i++) {
    printf("\n");
    for (int j = 1; j <= 4; j++) {
      M[i][j] = i * j;
      printf(" %d ", M[i][j]);
    }
  }
  return 0;
}
