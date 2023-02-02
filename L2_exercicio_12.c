#include <stdio.h>
#include <locale.h>
// restaurante
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float refrigerante = 2.50, cerveja = 4.00;
  float pizza = 47.30, almoço = 15.00, porção = 10.50;
  int mesa;
  int a, a1, a2, a3, a4;
  float T;
  printf ("Digite o número da mesa\n");
  scanf ("%d", &mesa);
  printf ("Digite o número de refrigerantes consumidos:\n");
  scanf ("%d", &a);
  printf ("Digite o número de cervejas consumidas:\n");
  scanf ("%d", &a1);
  printf ("Digite o número de pizzas consumidas:\n");
  scanf ("%d", &a2);
  printf ("Digite o número de almoços consumidos:\n");
  scanf ("%d" , &a3);
  printf ("Digite o número de porções consumidas:\n");
   scanf ("%d" , &a4);
  T = ((a * refrigerante) + (a1 * cerveja) + (a2 * pizza) + (a3 * almoço) +  (a4 * porção)) + ((a * refrigerante) + (a1 * cerveja) + (a2 * pizza) + (a3 * almoço) +  (a4 * porção))*10/100;
    printf ("a quantia a ser paga pela mesa é: %0.2f", T);
  return 0;
}
