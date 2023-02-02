#include <stdio.h>
#define m 3
int main(void) {
  int A[m][m][m];
  for (int i = 0; i < m; i++) {
    printf("\n");
    for (int j = 0; j < m; j++) {
      for (int r = 0; r < m; r++) {
        printf("\nDigite o elemento da matriz na linha %d, coluna %d e profundidade %d\n", i, j, r);
        scanf("%d", &A[i][j][r]);
        printf("  %d   ", A[i][j][r]);
      }
    }
  }
  for (int i = 0; i < m; i++) {
    printf("\n");
    for (int j = 0; j < m; j++) {
      ("\n");
      for (int r = 0; r < m; r++) {
        printf("  %d   ", A[i][j][r]);
      }
    }
  }
  return 0;
}
