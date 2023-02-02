#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int A[5], B[5], i = 0, j, k, aux;
  for (i = 0; i < 5; i++) {
    printf("Digite um número\n");
    scanf("%d", &j);
    while (j == 0) {
      printf("Digite um número diferente de zero\n");
      scanf("%d", &j);
    }
    A[i] = j;
    printf("\nA[%d]=%d\n", i, A[i]);
  }
  k = 0;
  for (k = 0; k < 5; k++) {
    printf("Digite um número\n");
    scanf("%d", &j);
    while (j == 0) {
      printf("Digite um número diferente de zero\n");
      scanf("%d", &j);
    }
    B[k] = j;
    printf("\nB[%d] = %d\n", k, B[k]);
  }
  k = 0;
  i = 4;
  while (i < 5 && k < 5) { 
    aux = A[i];
    A[i] = B[k];
    B[k] = aux;
    printf("\nA[%d] = %d\n", i, A[i]);
    printf("\nB[%d] = %d\n", k, B[k]);
    i--;
    k++;
  }
  return 0;
}
