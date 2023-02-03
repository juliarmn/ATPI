#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str1[100], str2[100], str3[200], auxiliar, count = 0;
  printf("Digite a string número 1\n");
  gets(str1);
  fflush(stdin);
  puts("\nDigite a string 2\n");
  gets(str2);
  // tamanho:
  printf("\nO tamanho da string 1 é %d\n", strlen(str1));
  printf("\nO tamanho da string 2 é %d\n", strlen(str2));
  // concatenar e guardar em 3
  strcat(str1, str2);
  strcpy(str3, str1);
  puts(str3);
  // num vogais
  for (int i = 0; i < strlen(str3); i++) {
    auxiliar = str3[i];
    auxiliar = tolower(auxiliar);  // para vogais maiúsculas e minúsculas
    if (auxiliar == 'a' || auxiliar == 'e' || auxiliar == 'i' || auxiliar == 'o' || auxiliar == 'u') {
      count++;
    }
  }
  printf("\nO número de vogais é %d\n", count);
  system("PAUSE");
  return 0;
}
