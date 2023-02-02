/*1. Construa um algoritmo para ler um número e mostrar uma mensagem informando se o número
lido está no intervalo de 20 a 100 ou uma mensagem para informar que o número está fora do
intervalo definido.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float num;
  printf("Digite um número de 20 a 100\n");
  scanf("%f", &num);
  if (num > 100 || num < 20) {
    printf ("O número %.2f não está no intervalo definido", num);
  }
  else {
    printf ("O número %.2f está no intervalo definido", num);
  }
  return 0;
}
