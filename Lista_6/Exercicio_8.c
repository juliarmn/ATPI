#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Construa um programa para gerar automaticamente números entre 0 e 99 de uma
cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números,
gere estes dados de modo que não tenha
números repetidos dentro das cartelas. O programa deve exibir na tela a cartela
gerada.*/
int main(void) {
  int cartela[5][5], repetido, i, j, aleatorio, aux[25], count = 0;
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      do {
        aleatorio = rand() % 99;  // sorteia um número
        aux[count] = aleatorio;
        repetido = 0;  // não há repetido
        for (int l = 0; l < i; l++) {
          if (aux[l] == aleatorio) {
            repetido = 1;
          }
        }
      } while (repetido == 1);
      cartela[i][j] = aleatorio;
      count++;
    }
  }

  // para printar:
  for (int i = 0; i < 5; i++) {
    printf("\n");
    for (int j = 0; j < 5; j++) {
      printf(" %d ", cartela[i][j]);
    }
  }

  return 0;
}
