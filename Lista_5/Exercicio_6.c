#include <stdio.h>
#include <locale.h>
#define size 10
/*Escreva um programa para simular as operações de uma fila (FIFO), ou seja, o primeiro
elementoa entrar na fila é o primeiro a ser retirado da fila. O programa deve permitir uma fila
com 10 posições. Uma lista FIFO é comumente utilizada para gerenciar processos em que a
ordem de chegada é a que deve ser utilizada para o atendimento, por exemplo, como ocorre em
uma fila de impressão. O programa deve ter as operações de inserção e remoção. */

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int ultimo = 0, primeiro = 0, op, count = 0, fila[size];
  do {
    printf("\n\t\t\t -----> FIFO <-----");

    do {
      printf("\n\t 1. Consultar o primeiro elemento da fila");
      printf("\n\t 2. Incluir elemento na fila");
      printf("\n\t 3. Atender primeiro da fila");
      printf("\n\t 4. Sair\n");
      scanf("\t%d", &op);
    } while (op < 1 || op > 4);
    if (op == 1) {
      if (count == 0) {
        printf("\nNão há elementos na fila\n");
      } else {
        printf("\n o primeiro é %d\n", fila[primeiro]);
      }
    }
    if (op == 2) {
      if (count == size) {
        printf("\nFILA CHEIA\n");
      } else {
        printf("\nDigite o elemento que deseja colocar na fila\n");
        scanf("%d", &fila[ultimo]);
        count++;
        ultimo++;  // inclui elemento novo, que passa a ser o último a ser atendido
      }
    }
    if (op == 2) {
      if (count == 0) {
        printf("\nNão há  mais o que atender\n");
      } else {
        count--;
        primeiro++;  // o primeiro passa a ser o próximo elemento
      }
    }
  } while (op != 4);
  return 0;
}
