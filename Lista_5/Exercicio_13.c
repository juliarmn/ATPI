#include <stdio.h>
#include <locale.h>
/*Dado um vetor A de tamanho 5, capaz de armazenar números inteiros, escreva um programa
para obter a maior diferença entre dois elementos consecutivos desse vetor. Imprimir a
maior diferença e os índices dos respectivos elementos.*/
#define size 5
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[size], i, maior, menor;
  for (i = 0; i < size; i++) {
    printf("\nDigite o valor do vetor A no índice %d\n", i);
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < size; i++) {
    if (i == 0) {
      maior = A[i];
      menor = A[i];
    }
    if (A[i] > maior) {
      maior = A[i];
    }
    if (A[i] < menor) {
      menor = A[i];
    }
  }
  printf("\nA maior diferença no vetor : %d\n", maior - menor);
  return 0;
}
