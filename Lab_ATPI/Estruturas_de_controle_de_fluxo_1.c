#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  char produto [30];
  float valor, preço;
  int quantidade;
  printf ("Escreva o nome do produto, o preço dele e a quantidade comprada:\n");
  scanf(" %s %f %d", &produto, &preço, &quantidade);
  printf("O nome do produto é %s, o preço é %0.2f e a quantidade é %d \n", produto, preço, quantidade);
  if (quantidade >= 11 && quantidade <= 20)
  {
    valor = preço * quantidade * 0.9;
    printf("Você pagará %.2f pela quantidade comprada do produto %s", valor, produto);
  }
  else if (quantidade >= 21 && quantidade <= 50)
  {
    valor = preço * quantidade * 0.8;
    printf("Você pagará %.2f pela quantidade comprada do produto %s", valor, produto);
  }
  else if (quantidade >= 50)
  {
    valor = preço * quantidade * 0.75;
    printf("Você pagará %.2f pela quantidade comprada do produto %s", valor, produto);
  }
  else {
    valor = preço * quantidade;
    printf("Você pagará %.2f pela quantidade comprada do produto %s", valor, produto);
  }
  return 0;
}
