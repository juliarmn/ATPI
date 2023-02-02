#include <stdio.h>

/*Anacleto tem 1,50 metros e cresce 2,0 centímetros por ano. Felisberto tem 1,10 metros e cresce 3,0
centímetros por ano. Construa um programa para calcular e escrever quantos anos são necessários
para Felisberto ser mais alto que Anacleto.*/
int main(void) {
  float x, ana, felis, taxa_a, taxa_f;
  int ano;
  ana = 1.5;
  felis = 1.1;
  taxa_a = 0.02;
  taxa_f = 0.03;
  ano = 0;
  while (ana > felis) {
    ana = ana + taxa_a;
    felis = felis +taxa_f;
    ano++;
  }
  printf("a altura de Anacleto e Felisberto se igualam em %d anos na altura %0.2f", ano, felis);
  return 0;
}
