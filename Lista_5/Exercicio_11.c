#include <stdio.h>
#include <stdlib.h>
#define size 500
/*Escreva um programa para ler um vetor com 500 posições e, em seguida, permitir que o
usuárioescolha algumas operações:
Apresentar elementos em ordem crescente
Apresentar elementos em ordem decrescente
Imprimir todo o vetor
Imprimir as posições de um intervalo especificado pelo usuário
Digite <s> ou <S> para encerrar*/
int main(void) {
  srand(time(NULL));
  int V[size], Vcrescente[size], Vdecrescente[size];
  char op;
  int p1, p2, i, menor, maior;
  for (i = 0; i < 500; i++) {
    V[i] = 1 + rand() % 100;
    Vcrescente[i] = V[i];
    Vdecrescente[i] = V[i];
    do {
      printf("\n Escolha uma opção\na.Apresentar elementos em ordem crescente,\nb.Apresentar elementos em ordem decrescente,\nc.Imprimir todo o vetor,\nd.Imprimir as posições de um intervalo especificado pelo usuário");
      scanf("%c", &op);
    } while (op != 's' || op != 'S');  // validação
    if (op == 'a') {
      for (i = 0; i < 499; i++) {
        menor = i;
        for (int j = i + 1; j < 500; j++) {
          if (Vcrescente[j] < V[menor]) {
            menor = j;
          }
        }
      }
    }
    if (op == 'b') {
      for (i = 0; i < 499; i++) {
        maior = i;
        for (int j = i + 1; j < 500; j++) {
          if (Vcrescente[j] > V[maior]) {
            maior = j;
          }
        }
      }
    }
    if (op == 'c') {
      for (i = 0; i < 500; i++) {
        printf(" %d", V[i]);
      }
    }
    if (op == 'd') {
      do {
        printf("\ndefina o intervalo: o primeiro delimitador\n");
        scanf("%d", &p1);
        printf("\ndefina o intervalo: o segundo delimitador\n");
        scanf("%d", &p2);
      }
    }
  }
  return 0;
}
