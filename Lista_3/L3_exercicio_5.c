/*Faça um algoritmo para calcular o valor da conta de energia elétrica de uma residência. O valor de
cada kWh é R$ 0,10. Considere que o algoritmo deve aplicar um desconto de 15% na conta de
pessoas aposentadas.*/

#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  const float valor = 0.1; //Só para teste - desnecessário
  float KWH;
  int idade;
  printf ("Digite quantos KWh foram usado por mês\n");
  scanf ("%f", &KWH);
  printf ("Digite sua idade\n");
  scanf ("%d", &idade);
  if (idade < 65)
    printf("O valor da conta é: %f\n", KWH * valor);
  else 
    printf("O valor da conta é: %.2f\n", KWH * valor * 0.85);
  return 0;
}
