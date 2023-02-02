#include <stdio.h>
#include <locale.h>

int main(void) { 
  setlocale(LC_ALL, "Portuguese");
  //variáveis:
  float KWH, preço;
  int idade, residencias;
  preço=0.1; //não é necessário colocar, o valor vai modificar sempre
  printf ("\nDigite a quantidade de residências analisadas\n" );
  scanf ("%d", &residencias);
  for (int i = 1; i <= residencias; i ++) { 
      printf ("\nDigite a quantidade de Kwh consumidas no mês na residência %d\n", i);
      scanf ( " %f", &KWH);
      printf ("\nDigite a idade do morador\n");
      scanf ( " %d", &idade);
      if (idade >= 70) {
        preço= KWH*0.1*0.75;
        printf ("\nO valor a ser pago na residência %d é: %.2f\n", i, preço);
      } 
      else {
        preço=KWH*0.1;
        printf ("\nO valor a ser pago na residência %d é: %.2f\n", i, preço);
      }
  }
  return 0;
}
