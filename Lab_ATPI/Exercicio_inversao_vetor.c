#include <stdio.h>
#include <locale.h>
#define size 10

int main(){
  int N[size], aux;
  for(int i = 0; i < size; i++){
    printf("\nDigite o %dº termo do vetor\n", i + 1);
    scanf("%d", &N[i]);
  }
  printf("\n\t\t===> Vetor invertido <===\n");
  for(int i = 0; i <= size / 2; i ++){
    aux = N[i];
    N[i] = N[size - 1 - i];
    N[size - 1 - i] = aux;
  }
  for(int i = 0; i < size; i++){
    printf("\n\t [ %d ] \n", N[i]);
  }
  //system("pause");
  return 0;
}
