#include <stdio.h>
#include <time.h>
/*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada
numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal.
Imprima a matriz original e a matriz transformada.*/
int main(void) {
  int A[4][4], B[4][4];
  srand(time(NULL));
  for (int i = 0; i < 4; i++) {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      A[i][j] = 1 + rand() % 20;
      printf("   %d    ", A[i][j]);
    }
  }
  printf("\n");
  for (int i = 0; i < 4; i++) {
    printf("\n");
    for (int j = 0; j < 4; j++) {
      if (i < j) {
        B[i][j] = 0;
      } else {
        B[i][j] = A[i][j];
      }
      printf("   %d    ", B[i][j]);
    }
  }
  return 0;
}
