#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, num, n, fat=1;
  printf("digite um número:\n");
  scanf("%d", &num);
  n = num;
  for (i = num; i > 0; i--) {
      fat = fat * i;
    }
  printf ("o fatorial do número %d é %d", n, fat);
  return 0;
}
