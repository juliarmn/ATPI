#include <stdio.h>
int main(void) {
  int antecessor, num, sucessor;
  printf("digite um número inteiro\n");
  scanf("%d", &num);
  antecessor = num - 1;
  sucessor = num + 1;
  printf("O antecessor e o sucessor do número %d são: antecessor = %d e sucessor = %d\n", num, antecessor, sucessor);
  return 0;
}
