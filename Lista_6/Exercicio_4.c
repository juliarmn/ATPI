#include <stdio.h>
/*Faça um programa que leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna)
do maior valor.*/
int main(void) {
  int A[4][4], maior, linha, coluna, i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("\nDigite o elemento da matriz na linha %d e coluna %d\n", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  maior = A[0][0];
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (A[i][j] > maior) {
        maior = A[i][j];
        linha = i + 1;
        coluna = j + 1;
      }
    }
  }
  printf("\nO maior elemento é %d na linha %d e coluna %d\n", maior, linha, coluna);
  return 0;
}
