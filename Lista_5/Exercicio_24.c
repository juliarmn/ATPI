#include <stdio.h>
/*Escreva um programa para realizar apresentar a tabuada de um número informado pelo usuário,
seguindo formato: multiplicando x multiplicador = resultado. Os resultados desse processo devem
ser armazenados em um vetor res. Apresentar res.*/
int main(void) {
  int res[11], multiplicando, multiplicador, i;
  printf("\nDigite o número da tabuada que você deseja\n");
  scanf("%d", &multiplicando);
  for (i = 0; i < 11; i++) {
    res[i] = multiplicando * i;
  }
  for (i = 0; i < 11; i++) {
    printf("\n%d", res[i]);
  }
  return 0;
}
