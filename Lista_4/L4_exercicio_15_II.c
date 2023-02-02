#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int count, i, x;
  srand(time(NULL));
  count = 0;
  for (i = 0; i < 21; i++) {
    x = 1 + rand() % 6;
    // gerando valores aleatórios na faixa de 0 a 100
    printf("%d ", x);
    count++;
    if (count % 3 == 0) {
      printf("\n");
    }
  }
  return 0;
}
