#include <stdio.h>
#include <locale.h>
#define size 11

int main(void) {
  int num, i;
  printf("Digite um número: ");
  scanf ("%d", &num);
  for (i = 0; i < size; i ++) {
    printf("\n%d * %d: %d\n", num, i, num * i);
    }
  return 0;
}
