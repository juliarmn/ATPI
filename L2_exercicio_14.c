#include <stdio.h>
#include <locale.h>
// Programa para ver o aumento de um salário
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float salario_atual, aumento;
  printf("digite o seu salário atual\n");
  scanf("%f", &salario_atual);
  printf("digite o aumento em percentual:\n");
  scanf("%f", &aumento);
  printf ("O seu novo salário é: %0.2f", salario_atual + (salario_atual * aumento/100));
  return 0;
}
