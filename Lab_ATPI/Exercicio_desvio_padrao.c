#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  float vet[10], media, soma = 0, desvio;
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    vet[i] = rand() % 10;
    soma += vet[i];
  }
  media = soma / 10;
  soma = 0;
  for (int i = 0; i < 10; i++) {
    soma += (pow(vet[i] - media, 2));
  }
  desvio = sqrt(soma / 9);
  printf("\nO desvio é: %f\n", desvio);
  system("PAUSE");
  return 0;
}
