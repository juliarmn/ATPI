#include <stdio.h>
#include <locale.h>
#define size 5

int main() {
  setlocale(LC_ALL, "Portuguese");
  int A[size], B[size], C[size] = {0}, j;
  for (int i = 0; i < size; i++) {
    do {
      printf("Digite um número para A\n");
      scanf("%d", &A[i]);
    } while (A[i] == 0);
  }
  for (int i = 0; i < size; i ++) {
    do {
      printf("Digite um número para B\n");
      scanf("%d", &B[i]);
    } while (B[i] == 0);
  }
  for (int i = 0; i < size; i++) {
    C[size - 1 - i] = A[size - 1 - i] * B[i];
  }
  for (int i = 0; i < size; i++) {
    printf(" [ %d ] ", C[i]);
  }
  // system("Pause");
  return 0;
}
