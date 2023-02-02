#include <stdio.h>
#define m 3
int main(void) {
  int A[m][m][m], count;
  char op;
  for (int x = 0; x < m; x++) {
    printf("\n\n");
    printf("x:%d", x);

    for (int y = 0; y < m; y++) {
      printf("\n");
      for (int z = 0; z < m; z++) {
        A[x][y][z] = z;
        printf(" %d ", A[x][y][z]);
      }
    }
  }
  do {
    printf("\n digite o eixo que você  quer\n");
    scanf("%c", &op);
  } while (op != 'x' && op != 'y' && op != 'z');
  if (op == 'x') {
    for (int x = 0; x < m; x++) {
      printf("\n");
      for (int y = 0; y < m; y++) {
        printf("\n");
        for (int z = 0; z < m; z++) {
          printf(" %d ", A[x][y][z]);
        }
      }
    }
  }
  if (op == 'y') {
    for (int y = 0; y < m; y++) {
      printf("\n");
      for (int x = 0; x < m; x++) {
        printf("\n");
        for (int z = 0; z < m; z++) {
          printf(" %d ", A[y][x][z]);
        }
      }
    }
  } else {
    for (int z = 2; z >= 0; z--) {
      printf("\n");
      for (int x = 0; x < m; x++) {
        printf("\n");
        for (int y = 0; y < m; y++) {
          printf(" %d ", A[x][y][z]);
        }
      }
    }
  }
  return 0;
}
