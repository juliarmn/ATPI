/*Ler um número e imprimir se o mesmo é positivo, negativo ou nulo.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int num;
  printf("Digite um número intero\n");
  scanf ("%d", &num);
  if (num == 0)
    printf ("Esse número é nulo");
  else if (num < 0)
    printf ("O número %d é negativo", num);
   else if (num > 0)
    printf ("O número %d é positivo", num);
  return 0;
}
