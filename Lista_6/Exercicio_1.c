#include <locale.h>
#include <stdio.h>
#define N 4

/*1. Construa um programa para ler uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela
possui.*/

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[N][N], i = 0, j = 0, soma = 0;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("Digite o elemento da matriz na linha %d e coluna %d\n", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (A[i][j] > 10) {
        soma = soma + 1;
      }
    }
  }
  printf("\nO números de elementos maiores que 10 é %d\n", soma);
  return 0;
}
