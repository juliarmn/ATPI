#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int vet[6], aux;
  for (int i = 0; i < 6; i++) {
    printf("\nDigite o valor do vetor na posição %d\n", i);
    scanf("%d", &vet[i]);
  }
  menor = vet[0];
  for (int i = 0; i < 6; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (vet[i] > vet[j]) {
        aux = vet[i];
        v[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  printf("\nVETOR CRESCENTE\n");
  for (int i = 0; i < 6; i++) {
    printf("\t[%d]\t", vet[i]);
  }
  //system("PAUSE");
  return 0;
}
