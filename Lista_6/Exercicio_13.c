#include <stdio.h>
/*Construa um programa para ler dados e armazenar em duas matrizes inteiras, nomeadas como A e B. As
dimensões das matrizes são 3x3. Armazenar em uma matriz R o resultado da multiplicação de A por B.
Complemente o exercício 13 para que o processo de multiplicação seja realizado somente quando o
número de colunas da 1a matriz é igual ao número de linhas da 2a matriz.*/
#define m 3
int main(void) {
  int A[m][m], B[m][m], M[m][m];
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 3; j++) {
      A[i][j] = j;
      printf(" %d ", A[i][j]);
    }
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 3; j++) {
      B[i][j] = i;
      printf(" %d ", B[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      M[i][j] = 0;
    }
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        M[i][j] = M[i][j] + A[i][k] * B[k][j];
      }
      printf(" %d ", M[i][j]);
    }
  }
  return 0;
}
