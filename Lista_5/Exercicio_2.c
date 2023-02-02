#include <stdio.h>
#include <locale.h>

int main(void) { 
  setlocale(LC_ALL, "Portuguese");
  int vetor[5], i = 0, soma = 0, pares = 0, impares = 0, im = 0, p = 0;
  for (i = 0; i < 5; i ++) {
    printf("Digite o número\n");
    scanf("%d", &vetor[i]);
    printf("O vetor [%d] é igual a %d\n", i, vetor[i]);
    soma = soma + vetor[i];
    if (vetor[i] % 2 == 0) {
      p = 1 + p;
      pares = pares + vetor[i];
    } else {
      im = im + 1;
      impares = impares + vetor[i];
    }
  }
  printf("\nA média dos vetores %.2f", (float)soma / i);
  printf("\nA média dos vetores pares %.2f", (float)pares / p);
  printf("\nA média dos vetores ímpares %.2f", (float)impares / im);
  printf("\nA quantidade de vetores pares=%d", p);
  printf("\nA quantidade de vetores ímpares=%d", im);
  return 0;
}
