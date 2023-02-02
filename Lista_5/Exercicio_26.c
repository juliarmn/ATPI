#include <locale.h>
#include <stdio.h>
#define size 41

int main(void) {
  char str1[size], str2[size], str3[82];
  int i = 0, j = 0;
  printf("Digite a string 1:\n");
  scanf(" %[^\n]", str1);
  printf("Digite a string 2:\n");
  scanf(" %[^\n]", str2);
  // strlen
  while (str1[i] != '\0') {
    i++;
  }
  printf("\nO tamanho da string 1 é:%d", i);
  i = 0;
  while (str2[i] != '\0') {
    i++;
  }
  printf("\nO tamanho da string 2 é:%d", i);
  // strcpy
  printf("\nstr3 inicialmente = %s", str3);
  j = 0;
  while (str1[j] != '\0') {
    str3[j] = str1[j];
    j++;
  }
  str3[j] = '\0';
  printf("\nFunção strcpy(str3, str1 - %s): %s", str1, str3);
  j = 0;
  i = 0;
  // strcat
  while (str1[j] != '\0') {
    str3[j] = str1[j];
    j++;
  }
  i = 0;
  while (str2[i] != '\0') {
    str3[j] = str2[i];
    i++;
    j++;
  }
  str3[j] = '\0';
  printf("\nstrcat:%s", str3);

  return 0;
}
