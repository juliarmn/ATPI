#include <stdio.h>
/*Construa um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que o tabuleiro
é representado por uma matriz de 3 x 3, na qual cada posição representa uma das casas do tabuleiro. A
matriz pode conter somente os valores -1, 0, 1. Estes valores representam uma casa contendo uma peça do
jogador A (-1), uma casa vazia do tabuleiro (0), e uma casa contendo uma peça do jogador B (1).*/
int main(void) {
  int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, l, c;
  char jog;
  printf("\t\t\tJOGO DA VELHA\t\t\t");
  for (int g = 0; g < 6; g++) {
    for (int i = 0; i < 3; i++) {
      printf("\n");
      for (int j = 0; j < 3; j++) {
        printf("  %d  ", tabuleiro[i][j]);
      }
    }
    do {
      printf("\nEscolha uma opção para linha\n");
      scanf("%i", &l);
      printf("\nEscolha uma opção para coluna\n");
      scanf("%i", &c);
    } while (tabuleiro[l][c] != 0);
    do {
      printf("\nQual o jogador?\n");
      scanf(" %c", &jog);
    } while (jog != 'A' && jog != 'B');
    if (jog == 'A') {
      tabuleiro[l][c] = -1;
    } else {
      tabuleiro[l][c] = 1;
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (tabuleiro[i][j] == 1 && tabuleiro[i][j + 1] == 1 && tabuleiro[i][j + 2] == 0 || tabuleiro[i][j] == 0 && tabuleiro[i][j + 1] == 1 && tabuleiro[i][j + 2] == 1 || tabuleiro[i][j] == 1 && tabuleiro[i][j + 1] == 0 && tabuleiro[i][j + 2] == 1) {
          printf("\no jogador B irá vencer\n");
          break;
        } else if (tabuleiro[i][j] == -1 && tabuleiro[i][j + 1] == -1 && tabuleiro[i][j + 2] == 0 || tabuleiro[i][j] == 0 && tabuleiro[i][j + 1] == -1 && tabuleiro[i][j + 2] == -1 || tabuleiro[i][j] == -1 && tabuleiro[i][j + 1] == 0 && tabuleiro[i][j + 2] == -1) {
          printf("\no jogador A irá vencer\n");
          break;
        } else if (tabuleiro[i][j] == -1 && tabuleiro[i + 1][j] == -1 && tabuleiro[i + 2][j] == 0 || tabuleiro[i][j] == 0 && tabuleiro[i + 1][j] == -1 && tabuleiro[i + 2][j] == -1 || tabuleiro[i][j] == -1 && tabuleiro[i + 1][j] == 0 && tabuleiro[i + 2][j] == -1) {
          printf("\no jogador A irá vencer\n");
          break;
        } else if (tabuleiro[i][j] == 1 && tabuleiro[i + 1][j] == 1 && tabuleiro[i + 2][j] == 0 || tabuleiro[i][j] == 0 && tabuleiro[i + 1][j] == 1 && tabuleiro[i + 2][j] == 1 || tabuleiro[i][j] == 1 && tabuleiro[i + 1][j] == 0 && tabuleiro[i + 2][j] == 1) {
          printf("\no jogador B irá vencer\n");
          break;
        } else if (tabuleiro[i][i] == 1 && tabuleiro[i + 1][i + 1] == 1 && tabuleiro[i + 2][i + 2] == 0 || tabuleiro[i][i] == 1 && tabuleiro[i + 1][i + 1] == 0 && tabuleiro[i + 2][i + 2] == 1 || tabuleiro[i][i] == 0 && tabuleiro[i + 1][i + 1] == 1 && tabuleiro[i + 2][i + 2] == 1) {
          printf("\no jogador B irá vencer\n");
          break;
        } else if (tabuleiro[i + 2][i] == 1 && tabuleiro[i + 1][i + 1] == 1 && tabuleiro[i][i + 2] == 0 || tabuleiro[i + 2][i] == 1 && tabuleiro[i + 1][i + 1] == 0 && tabuleiro[i][i + 2] == 1 || tabuleiro[i + 2][i] == 0 && tabuleiro[i + 1][i + 1] == 1 && tabuleiro[i][i + 2] == 1) {
          printf("\no jogador B irá vencer\n");
          break;
        } else if (tabuleiro[i][i] == -1 && tabuleiro[i + 1][i + 1] == -1 && tabuleiro[i + 2][i + 2] == 0 || tabuleiro[i][i] == 0 && tabuleiro[i + 1][i + 1] == -1 && tabuleiro[i + 2][i + 2] == -1 || tabuleiro[i][i] == -1 && tabuleiro[i + 1][i + 1] == 0 && tabuleiro[i + 2][i + 2] == -1) {
          printf("\no jogador A irá vencer\n");
          break;
        } else if (tabuleiro[i + 2][i] == -1 && tabuleiro[i + 1][i + 1] == -1 && tabuleiro[i][i + 2] == 0 || tabuleiro[i + 2][i] == -1 && tabuleiro[i + 1][i + 1] == 0 && tabuleiro[i][i + 2] == -1 || tabuleiro[i + 2][i] == 0 && tabuleiro[i + 1][i + 1] == -1 && tabuleiro[i][i + 2] == -1) {
          printf("\no jogador A irá vencer\n");
          break;
        } else {
          continue;
        }
      }
    }
  }
  return 0;
}
