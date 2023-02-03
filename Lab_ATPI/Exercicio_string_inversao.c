#include <stdio.h>
#include <string.h>

int main(){
  char string[8], invertida[8];
  int tamanho;
  puts("Digite um a string\n");
  gets(string);
  tamanho = strlen(string);
  for(int i = 0; i < tamanho; i ++){
    invertida[i] = string[tamanho - i - 1];
  }
  printf("\nString invertida: %s", invertida);
  //system("pause");
  return 0;
}
