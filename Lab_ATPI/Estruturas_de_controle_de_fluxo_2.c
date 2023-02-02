#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float a, b, c, delta, x1, x2;
  printf("Digite os coeficientes da expressão ax^2 + bx + c = 0\n");
  printf("a: ");
  scanf("%f", &a);
  printf("b: ");
  scanf("%f", &b);
  printf("c: ");
  scanf("%f", &c);
  printf("\nA equação é: %0.2fx^2 + %0.2fx + %0.2f\n", a, b, c);
  delta = b * b - 4 * a * c;
  if (delta < 0) {
    printf("\nSem raízes reais, delta = %.2f\n", delta);
    return 0;
  }

  if (delta == 0) {
    x1 = -b / (2 * a);
    printf("\nDELTA = %0.2f \n  x = %0.2f\n", delta, x1);
  } else {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    printf("\nDELTA = %0.2f \nx1 = %0.2f\nx2 = %0.2f\n\n", delta, x1, x2);
  }
  return 0;
}
