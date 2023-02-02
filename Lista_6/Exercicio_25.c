#include <stdio.h>
#include <time.h>
#define m 832333
int main(void) {
  int A[m][m][m];
srand(time(NULL));
  for (int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      for(int r=0; r<m; r++){
      A[i][j][r]=0;
      }
    }
  }
  printf("o tamanho é %lu bytes", sizeof(A));
  return 0;
}
