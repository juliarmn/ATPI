/*2. Elaborar um algoritmo para calcular o reajuste de salário de um funcionário. Considere que o
funcionário receberá um reajuste de 15%, caso seu salário seja menor que R$ 500,00. Se o salário
for maior ou igual a R$ 500,00, mas menor ou igual a R$ 1.000,00, o reajuste será de 10%. Se o
salário for maior que R$ 1.000,00, o reajuste aplicado será de 5%. Mostrar o salário com reajuste.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float sal;
  printf("Digite o seu salário atual\n");
  scanf ("%f", &sal);
  if (sal <= 500)
  {
    printf ("O novo salário com reajuste é: %.2f\n", sal * 1.15);
  }
  else if (sal > 500 && sal <= 1000)
  {
     printf ("O novo salário com reajuste é: %.2f\n", sal * 1.10);
  }
  else
  {
     printf ("O novo salário com reajuste é: %.2f\n", sal * 1.05);
  }
  return 0;
}
