#include <stdio.h>
#include <locale.h>
/*Faça um programa que leia um vetor A capaz de armazenar 10 valores. Em seguida, um vetor B
deve receber os valores A, excluindo-se números nulos e negativos. Apresente os vetores.*/
#define size 5
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[size], B[size];
  int i;
  for (i = 0; i <= 4; i++) {
    printf("\nDigite o valor do vetor A no índice %d\n", i);
    scanf("%d", &A[i]);
    if (A[i] > 0)
      B[i] = A[i];
  }
  for (i = 0; i <= 4; i++) {
    printf("A[%d]=%d e B[%d]=%d\n", i, A[i], i, B[i]);
  }
  return 0;
}
