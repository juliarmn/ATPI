#include <stdio.h>
#include <locale.h>
/*Dado um vetor VIN de 10 elementos inteiros, criar um vetor VAI de 30 elementos, sendo que
VAI[0], VAI[1] e VAI[2] recebe o valor de VIN[0] e assim por diante. Escrever um programa
que leia VIN e imprima VAI.*/
#define size 10
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int VIN[size], i = 0, VAI[size * 3], AUX;
  for (i = 0; i < size; i++) {
    printf("Digite os elementos do vetor VIN no índice %d\n", i);
    scanf("%d", &VIN[i]);
    VAI[3 * i] = VIN[i];
    VAI[3 * i + 1] = VIN[i];
    VAI[3 * i + 2] = VIN[i];
  }
  for (i = 0; i < 30; i++) {
    printf("\nVAI[%d] => %d\n", i, VAI[i]);
  }
  return 0;
}
