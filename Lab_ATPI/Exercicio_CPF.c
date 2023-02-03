#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char charPF[12], c;
  int CPF[11], i, soma = 0, resto, flag = 0;
  printf("Digite os 11 dígitos do CPF (nao usar pontos ou traços, please): ");
  scanf("%s", charPF);
  for (i = 0; i < 11; i++) {
    CPF[i] = charPF[i] - '0';  // É uma linguagem em C que converte string em int
  }
  for (i = 0; i < 9; i++) {
    if (CPF[i] != CPF[i + 1]) {
      flag == 1;
      // pode continuar a verificar
    }
    for (i = 0; i < 9; i++) {
      soma += CPF[i] * (10 - i);
    }
    resto = 10 * (soma) % 11;
    if (resto == 10) {
      resto = 0;
    }
    if (resto != CPF[9]) {
      printf("\nINVÁLIDO\n");
      return 0;
    }
    for (i = 0; i < 10; i++) {
      soma += CPF[i] * (11 - i);
    }
    resto = 10 * (soma) % 11;
    if (resto == 10) {
      resto = 0;
    }
    if (resto != CPF[10]) {
      printf("\nINVÁLIDO\n");
      return 0;
    }
    printf("\nVÁLIDO\n");
  }
  else {
    printf("\nINVÁLIDO\n");
  }
  return 0;
}
