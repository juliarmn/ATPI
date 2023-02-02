#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int dia, mês, ano;
  srand(time(NULL));
  ano = 1 + rand() % 2022;
  mês = 1 + rand() % 12;
  if (mês == 1 || mês == 3 || mês == 5 || mês == 7 || mês == 8 || mês == 10 || mês == 12) {
    dia = 1 + rand() % 31;
  } else if (mês == 4 || mês == 6 || mês == 9 || mês == 11) {
    dia = 1 + rand() % 30;
  } else {
    if (ano % 100 == 0 && ano % 400 != 0 || ano % 4 != 0) {
      dia = 1 + rand() % 28;
    } else {
      dia = 1 + rand() % 29;
    }
  }
  printf("%d ", dia);
  switch (mês) {
    case 1:
      printf("de janeiro");
      break;
    case 2:
      printf("de fevereiro");
      break;
    case 3:
      printf("de março");
      break;
    case 4:
      printf("de abril");
      break;
    case 5:
      printf("de maio");
      break;
    case 6:
      printf("de junho");
      break;
    case 7:
      printf("de julho");
      break;
    case 8:
      printf("de agosto");
      break;
    case 9:
      printf("de setembro");
      break;
    case 10:
      printf("de outubro");
      break;
    case 11:
      printf("de novembro");
      break;
    case 12:
      printf("de dezembro");
      break;
  }
  printf(" de %d", ano);
  return 0;
}
