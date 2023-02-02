#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int fib[15], i, termo, num = 1, aux = 0, anterior = 0;
  do {
    printf("Digite a quantidade de termos que você deseja (de 1 a 15)");
    scanf("%d", &termo);
  } while (termo <= 0 || termo > 15);
  printf("\t\t\tSérie Fibonacci\t\n");
  printf("---------------------------------");
  fib[0] = 1;
  printf("\n%d", fib[0]);
  for (i = 0; i < termo; i++) {
    aux = anterior + num;
    fib[i] = aux;
    anterior = num;
    num = aux;
  }
  for (i = 1; i < termo; i++) {
    printf("\t%d", fib[i]);
  }
  return 0;
}
