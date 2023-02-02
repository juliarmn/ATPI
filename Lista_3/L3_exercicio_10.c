/*
Elaborar um algoritmo para ler um valor inteiro e definir se o mesmo é divisível por 4. Caso não,
imprimir “número inválido”. Use o operador mod e, em seguida, defina o algoritmo sem esta
função. Usar seleção (se).
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int a, b, c;
  printf ("Digite 3 números inteiros diferentes\n");
  scanf ("%d %d %d", &a, &b, &c);
  
  if (a > b && b > c)
    printf("A ordem crescente é: %d, %d, %d\n", c, b, a);
  
  else if (a > c && c > b)
    printf("A ordem crescente é: %d, %d, %d\n", b, c, a);
  
  else if (b > a && a > c)
    printf("A ordem crescente é: %d, %d, %d\n", c, a, b);
  
  else if (c > a && a > b)
    printf("A ordem crescente é: %d, %d, %d\n", b, a, c);
  
  else if (c > b && b > a)
    printf("A ordem crescente é: %d, %d, %d\n", a, b, c );
  
  else if (b > c && c > a)
    printf("A ordem crescente é: %d, %d, %d\n", a, c, b);

  else if (a == b || b == c || a == c || a == c && a == b)
    printf ("Você não digitou números diferentes!\n");
  
  return 0;
}
