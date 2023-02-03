/*8. Escreva um algoritmo que, dado o primeiro elemento, a razão (valor positivo ou
negativo), e o número de termos N de uma Progressão Aritmética (PA), imprima todos
os N primeiros elementos da progressão.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int razao, a1, a, n;
  printf("\nDigite a razão da PA\n");
  scanf("%d", &razao);
  printf("\nDigiteo primeiro termo da PA\n");
  scanf("%d", &a1);
  printf("\nDigite o número de termos da PA\n");
  scanf("%d", &n);
  printf("\n\t\t-----> Progressão Aritimética <-----\t\t\n");
  for (int i = 0; i < n; i++) {
    a = a1 + r * (i - 1);
    printf("( %d ) ", a);
  }
  system("PAUSE");
  return 0;
}
