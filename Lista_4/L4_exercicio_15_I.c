#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Faça um programa que simula o lançamento de um dado 21 vezes e imprime a saída em 7 linhas, que
conterá o lançamento e o resultado obtido. Cada linha deve conter 3 lançamentos. Execute diversas
vezes o seu programa. As saídas são sempre iguais?*/
int main(void) {
  int x, i, count, jogadas;
  jogadas = 21;
  count = 0;
  for (i = 0; i < jogadas; i++) {
    x = 1 + rand() % 6;
    printf("%d ", x);
    count++;
    // se o modulo do contador for 0 quer dizer que ja foram printados 3 números logo deve-se pular uma linha
    if (count % 3 == 0) {
      printf("\n");
    }
  }
  return 0;
}
