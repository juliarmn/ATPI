#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
/*Faça um programa que leia uma matriz 5 x 5, bem como um valor X. O programa deverá fazer uma busca
desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[5][5], X, linha, coluna, flag = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Digite o valor do elemento da matriz na linha %d e coluna %d\n", i + 1, j + 1);
      scanf("%d", &A[i][j]);
    }
  }
  printf("Digite o valor de X que você deseja localizar\n");
  scanf("%d", &X);
  for (linha = 0; linha < 5 && flag == 0; linha++) {
    for (coluna = 0; coluna < 5 && flag == 0; coluna++) {
      if (A[linha][coluna] == X) {
        flag = 1;
        printf("\nO elemento X %d está na linha %d e coluna %d\n", X, linha, coluna);
      }
    }
  }
  if (flag == 0) {
    printf("\nElemento não encontrado\n");
  }
  return 0;
}
