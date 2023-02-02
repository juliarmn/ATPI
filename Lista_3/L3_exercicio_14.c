/*
  Considere três números digitados pelo usuário, e todos diferentes, imprima o maior número.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a, b, c;
  printf ("Digite 3 números inteiros\n");
  scanf ("%d %d %d", &a, &b, &c);
  if (a  >b && a > c)
    printf("O número %d é o maior\n", a);
  
  else if (b > a && b > c)
    printf("O número %d é o maior\n", b);
  
  else if (c > a && c > b)
    printf("O número %d é o maior\n", c);
  
  else
    printf("Todos os números são iguais\n" );
  
  return 0;
}
