#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  char cpf[21], cpfFormatado[21];
  printf("\nDigite seu CPF sem traços ou ponto\n");
  gets(cpf);
  for(int i = 0; i < 14; i ++){
    if(i >= 0 && i < 3){
      cpfFormatado[i] = cpf[i];
    }
    if(i == 3 || i == 7){
      cpfFormatado[i] = '.';
    }
    if(i > 3 && i < 7){
     cpfFormatado[i] = cpf[i - 1];
    }
    if(i > 7 && i < 11){
       cpfFormatado[i] = cpf[i - 2];
    }
    if(i == 11){
      cpfFormatado[i] = '-';
    }
    if(i > 11){
      cpfFormatado[i] = cpf[i - 3];
    }
  }
  printf("\n\t\t===> CPF formatado <===\n");
  printf("%s", cpfFormatado);
  //system("pause");
  return 0;
} 
