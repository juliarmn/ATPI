#include <string.h>
#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char nome[81], nomeFormatado[12];
  int tamanho, count = 3;
  printf("\nDigite seu nome completo\n");
  scanf(" %[^\n]s", nome);
  //fflush(stdin)
  nomeFormatado[0] = toupper(nome[0]);
  nomeFormatado[1] = '.';
  nomeFormatado[2] = ' ';
  tamanho = strlen(nome);
  for(int i = 0; i < tamanho; i ++){
    if(nome[i] == ' '){
      nomeFormatado[count] = toupper(nome[i + 1]);
      count ++;
      nomeFormatado[count] = '.';
      count ++;
      nomeFormatado[count] = ' ';
      count ++;
    }
  }
  printf("\n\t\t===> Nome Formatado < ===\n");
  puts(nomeFormatado);
  //system("pause");
  return 0;
}
