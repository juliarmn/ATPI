#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int A[3][4], S[3] = {0, 0, 0}, maior, menor;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Digite a matriz na linha %d e coluna %d\n", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  maior = A[0][0];
  menor = A[0][0];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (menor > A[i][j]) {
        menor = A[i][j];
      }
      if (maior < A[i][j]) {
        maior = A[i][j];
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      S[i] += A[i][j];
    }
  }
  printf("O maior elemento é %d e o menor é %d\n", maior, menor);
  printf("A SOMA DE CADA LINHA:\n");
  for (int i = 0; i < 3; i++) {
    printf("\n%d\n", soma[i]);
  }
  system("PAUSE");
  return 0;
}
