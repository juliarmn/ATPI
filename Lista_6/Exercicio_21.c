#include <stdio.h>
#include <locale.h>
/*A tabela indicada abaixo é composta por M colunas, representando notas, e N linhas, representando o
total de alunos. Escreva um programa que tenha a tabela armazenada em uma matriz e, em seguida, seja
capaz de mostrar a média de cada aluno, bem como a média geral da turma. A tabela tem o formato
abaixo.
Tabela (6x3)
7.5 8.5 7.8
8.4 9.2 6.8
9.1 10.0 9.5
4.0 5.2 4.6
5.7 3.4 4.3
4.3 6.0 5.8*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int j;
  float mediaAluno[6], mediaSala, soma = 0, somaAluno = 0, tabela[6][3] = {{7.5, 8.5, 7.8}, {8.4, 9.2, 6.8}, {9.1, 10.0, 9.5}, {4.0, 5.2, 4.6}, {5.7, 3.4, 4.3}, {4.3, 6.0, 5.8}};
  printf("\nA média dos alunos é\n");
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 3; j++) {
      somaAluno += tabela[i][j];
    }
    mediaAluno[i] = somaAluno / 3;
    printf(" \n%f\n ", mediaAluno[i]);
    somaAluno = 0;
  }
  for (int i = 0; i < 6; i++) {
    soma += mediaAluno[i];
  }
  mediaSala = soma / 6;
  printf("\nmédia sala:%f\n", mediaSala);
  return 0;
}
