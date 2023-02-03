#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char str[31], letra;
  int flag = 0, tamanho, count = 0;
  printf("\nDigite uma string\n");
  gets(str);
  printf("\nDigite a letra que deseja encontrar na string\n");
  scanf("%c", &letra);
  tamanho = strlen(str);
  for(int i = 0; i < tamanho; i ++){
    if(str[i] == letra){
      count ++;
      flag = 1;
    }
  }
  if(flag == 1){
    printf("\nA letra '%c' aparece %d vezes", letra, count);
  }else{
    printf("\nLetra não encontrada\n");
  }
  //system("pause");
  return 0;
}
