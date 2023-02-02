/*
1. Elaborar um algoritmo para calcular o reajuste de salário de um número indeterminado de
funcionários. Considere que um funcionário receberá um reajuste de 15%, caso seu salário seja
menor que R$ 500,00. Se o salário for maior ou igual a R$ 500,00, mas menor ou igual a R$
1.000,00, o reajuste será de 10%. Se o salário for maior que R$ 1.000,00, o reajuste aplicado será de
5%. Mostrar o salário com reajuste.
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  //declaração de variáveis
  float salario, salario_novo;
  int num_funcionarios, i;
  printf ("Digite o número de funcionários:\n");
  scanf ("%d", &num_funcionarios);
  for(i = 0; i < num_funcionarios; i ++) {
    printf ("Digite o salário atual do funcionário %d\n", i);
    scanf ("%f", &salario);
    //condicionais requeridas no problema
    if (sal <= 500) {
      salario_novo = salario * 1.15;
      printf("\nO novo salário é %0.2f\n", salario_novo);
    }
    else if (sal <= 1000) {
      salario_novo = salario*1.10;
      printf("\nO novo salário é %0.2f\n", salario_novo);
    } else {
      salario_novo = salario*1.05;
      printf("\nO novo salário é %0.2f\n", salario_novo);
    }
  }

  return 0;
}
