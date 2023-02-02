#include <locale.h>
#include <stdio.h>
/*Faça um programa para armazenar as informações de 100 alunos. O programa deve permitir entradas do
nome, número de matrícula, tipo de curso (0 ou 1), número do curso e a média geral de cada aluno. Como
resultado, o programa deve apresentar: (a) todas as informações armazenadas; (b) número de matrícula de
cada aluno vinculado ao tipo de curso 1; (b) nome e número de matrícula de cada aluno vinculado ao tipo
de curso 1, do número do curso indicado pelo usuário e que obteve a melhor média.*/
#define m 3
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float alunos[m], media[m];
  int i = 0, mat[m], curso[m];
  char alunosNome[m][60], op;
  for (int i = 0; i < 3; i++) {
    printf("\nDigite o nome completo do aluno número %d", i);
    scanf(" %s", alunosNome[i]);
  }
  for (int i = 0; i < 3; i++) {
    printf("\nDigite o número da matrícula\n");
    scanf(" %d", &mat[i]);
  }
  for (i = 0; i < m; i++) {
    do {
      printf("\nDigite o tipo de curso\n");
      scanf(" %f", &alunos[i]);
    } while (alunos[i] != 0 && alunos[i] != 1);
  }
  printf("\nO número do curso\n");
  scanf(" %d", &curso[i]);
  printf("\nDigite a média geral do aluno\n");
  scanf(" %f", &media[i]);
  do {
    printf("\nDigite a opção desejada:\na.Apresentar todas as informações do aluno;\nb. número de matrícula de cada aluno vinculado ao tipo de curso 1\nc.nome e número de matrícula de cada aluno vinculado ao tipo de curso 1, do número do curso indicado pelo usuário e que obteve a melhor média.");
    scanf("%c", &op);
    if (op == 'a') {
      for (i = 0; i < m; i++) {
        printf("\nO nome do aluno é: %s\n", alunosNome[i]);
        printf("\nNúmero de matrícula: %i\n", mat[i]);
        printf("\nTipo de curso:%f\n", alunos[i]);
        printf("\nO número do curso:%d\n", curso[i]);
        printf("\nA média geral do aluno é:%.2f\n", media[i]);
      }
    }
    if (op == 'b') {
      if (alunos[i] == 1) {
        printf("\nNúmero de matrícula:%d\n", mat[i]);
      }
    }
    if (op == 'c') {
    }
    i++;
  } while (op != 'a' && op != 'b' && op != 'c' && i > m);

  return 0;
}
