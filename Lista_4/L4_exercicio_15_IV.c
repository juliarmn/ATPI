#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  int i, x, soma_1, soma_2, soma_3, soma_4, soma_5, soma_6, jogadas;
  jogadas = 6000;
  soma_1 = 0;  // soma deve estar fora do loop, ou então vai assumir sempre valor 0 (repete a atribuição 0)
  soma_2 = 0;
  soma_3 = 0;
  soma_4 = 0;
  soma_5 = 0;
  soma_6 = 0;
  srand(time(NULL));  // não sei porque, mas a srand tem que estar fora ou só vai dar 1 número aleatório sempre igual
  for (i = 1; i <= jogadas; i++) {
    // a rand () deve estar dentro para participar do loop
    x = 1 + rand() % 6;
    switch (x) {
      case 1:
        soma_1 = soma_1 + 1;
        break;
      case 2:
        soma_2 = soma_2 + 1;
        break;
      case 3:
        soma_3 = soma_3 + 1;
        break;
      case 4:
        soma_4 = soma_4 + 1;
        break;
      case 5:
        soma_5 = soma_5 + 1;
        break;
      case 6:
        soma_6 = soma_6 + 1;
        break;
    }
  }  // print fora do loop
  printf("o número de lançamentos com a face 1 é %d\n", soma_1);
  printf("\no número de lançamentos com a face 2 é %d\n", soma_2);
  printf("\no número de lançamentos com a face 3 é %d\n", soma_3);
  printf("\no número de lançamentos com a face 4 é %d\n", soma_4);
  printf("\no número de lançamentos com a face 5 é %d\n", soma_5);
  printf("\no número de lançamentos com a face 6 é %d\n", soma_6);
  return 0;
}
