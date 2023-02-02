#include <stdio.h>
/*Construa um programa para ler uma matriz 5 x 10 que indica as respostas de cinco alunos para 10
questões de múltiplas escolhas. O programa deve ler também um vetor de 10 posições contendo o
gabarito de respostas que podem ser a, b, c ou d. O programa deverá comparar as respostas de cada
candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente
a cada aluno.*/
int main(void) {
  char Gabarito[10] = {'a', 'b', 'a', 'a', 'd', 'd', 'c', 'a', 'c', 'd'}, respCandidatos[5][10];
  int i, j, soma = 0, Resultado[5];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 10; j++) {
      do {
        printf("Digite a resposta do aluno %d na questão %d\n", i + 1, j + 1);
        scanf(" %c", &respCandidatos[i][j]);
      } while (respCandidatos[i][j] != 'a' && respCandidatos[i][j] != 'b' && respCandidatos[i][j] != 'c' && respCandidatos[i][j] != 'd');
      if (respCandidatos[i][j] == Gabarito[j]) {
        soma = soma + 1;
      } else {
        soma = soma;
      }
    }
    Resultado[i] = soma;
    printf("O resultado do candidato %d é %d", i + 1, Resultado[i]);
  }
  return 0;
}
