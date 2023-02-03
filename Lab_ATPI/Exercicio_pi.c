#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  double sinal, denominador, termo, soma;
  double e;
  sinal = -1;
  denominador = -1;
  soma = 0;
  do {
    printf("\nDigite um número pequeno menor que 1 e maior que 0\n");
    scanf("%lf", &e);
  } while (e > 1 && e < 0);
  do {
    sinal = -sinal;
    denominador = denominador + 2;
    termo = sinal / denominador;
    soma += termo;
  } while (fabs(termo) > e);
  printf("\n---->PI<----\n");
  printf("%lf", soma);
  system("PAUSE");
  return 0;
}
