/*8. Construir um algoritmo para ler três valores (A, B e C) e verificar se os mesmos permitem
representar um triângulo. Se sim, verificar o tipo de triângulo: equilátero, isósceles ou escaleno.
Informar se os lados não compõem um triângulo. Usar seleção (se).
Triângulo: figura geométrica composta por três lados, em que cada lado é menor do que a soma
dos outros dois.
Triângulo equilátero: um triângulo com três lados iguais.
Triângulo isósceles: um triângulo com dois lados iguais.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float a, b, c;
  printf("digite os três lados de um triângulo\n");
  scanf ("%f %f %f", &a, &b, &c);
  if (a + b < c || c + b < a || a + c < b)
     printf("Não é um triângulo\n");
  else if (a == b && a == c)
     printf("É um triângulo escaleno\n");
  else if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b)+ (c * c) == (a * a))
     printf("É um triângulo retângulo\n");
  else if (a == b && a != c || b == c && c != a|| c == a && a != b)
     printf("É um triângulo isóceles\n");
  return 0;
}
