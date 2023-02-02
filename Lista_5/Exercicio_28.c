// Ver se a palavra é um palíndromo
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char str[60];
  int i = 0, resp = 1, j = 0;
  printf("Digite uma palavra\n");
  scanf("%s", str);
  while (str[i] != '\0') {
    i++;
  }
  printf("\nO tamanho da string %s é %d\n", str, i);
  i--;
  while (str[j] != '\0' && resp == 1) {
    if (str[j] != str[i]) {
      resp = 0;
      printf("\nA palavra não é um palíndromo!\n");
      return 0;
    }
    i--;
    j++;
  }

  printf("\nA palavra é um palíndromo!\n");

  // system("PAUSE");
  return 0;
}
