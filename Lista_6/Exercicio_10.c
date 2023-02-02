#include <stdio.h>
#include <time.h>
#include <locale.h>
/*Construa um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d ou e), em
uma turma com três alunos. Cada questão vale 1 ponto. O programa deve ler o gabarito, a matrícula
(número inteiro) de cada aluno e suas respostas. Calcule e escreva: Para cada aluno, escreva sua
matrícula, suas respostas e sua nota. O percentual de aprovação, assumindo média 7.0.*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  char gabarito[10], respostasAlunos[3][10];
  int matricula[3], soma = 0, resultado[3], media, aprovados = 0, percentual;
  srand(time(NULL));
  for (int j = 0; j < 10; j++) {
    printf("Digite a resposta da questão %d\n", j + 1);
    scanf("%c", &gabarito[j]);
    printf(" %c ", &gabarito[j]);
  }
  for (int i = 0; i < 3; i++) {
    matricula[i] = 10000 + rand() % 30000;
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("Digite a resposta do aluno %d na questão %d\n", i + 1, j + 1);
      scanf("%c", &respostasAlunos[i][j]);
      if (respostasAlunos[i][j] == gabarito[j]) {
        soma = soma + 1;
      } else {
        soma = soma;
      }
      resultado[i] = soma;
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 10; j++) {
        if (resultado[i] > 7) {
          aprovados = aprovados + 1;
        }
        percentual = (aprovados / 3) * 100;
      }
    }
    for (int i = 0; i < 3; i++) {
      printf("\nMatrícula número %d, aluno %d\n", matricula[i], i + 1);
      for (int j = 0; j < 10; j++) {
        printf("\n%c", respostasAlunos[i][j]);
      }
      printf("\n%d", resultado[i]);
    }
  }
  printf("\nO número de aprovados é %d\n", percentual);
  return 0;
}
