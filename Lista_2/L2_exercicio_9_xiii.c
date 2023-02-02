#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");//Acentuação
  int num_1, num_2;
  float D;
  printf ("digite dois números inteiros:\n");
  scanf ("%d %d", &num_1, &num_2);
  printf ("\t\t---> Operações <---\n");
  printf ("Soma: %d\n", (num_1 + num_2));
  printf ("Subtração: %d\n", (num_1 - num_2));
  printf ("Multiplicação: %d\n", (num_1 * num_2));
  printf ("Divisão: %d\n", (float)num_1/(float)num_2);//Faz o casting
  return 0;
}
