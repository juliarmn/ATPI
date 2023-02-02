#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  struct aluno{
  float notaProva, notaTrabalho, media;
  char nome[40];
  }aluno;
  
  printf("\ndigite seu nome\n");
  scanf(" %[^\n]s", aluno.nome);
  printf("\ndigite a nota da prova\n");
scanf("%f", &aluno.notaProva);
  printf("\ndigite a nota do trabalho\n");
  scanf("%f", &aluno.notaTrabalho);
aluno.media=(aluno.notaTrabalho+aluno.notaProva)/2;
  printf("\n a média é: %.2f", aluno.media);
  return 0;
}
