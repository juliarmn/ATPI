/*
Efetuar a leitura de um número inteiro e apresentar uma mensagem informando se o número é par
ou ímpar. Usar seleção (se).
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int num;
  printf ("Digite um número inteiro\n");
  scanf ("%d", &num);
  if (!(a % 2))//Se o mod der 0, é divisivel; para entrar na condição, deve ser 1; 0 negado é 1
    printf ("O número %d é par\n", num);
   else
    printf ("O número %d é ímpar\n", num);
  return 0;
}
