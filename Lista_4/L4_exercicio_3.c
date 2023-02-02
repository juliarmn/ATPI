#include <stdio.h>
#include <locale.h>
#define h 10

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int produto, i;
  for (i = 1; i <= h; i++) {
      printf("Digite o número que representa o produto\n");
      scanf("%d", &produto);
      switch (produto) {
          case 1: printf ("o produto tem procedência do Sul\n"); break;
          case 2: printf ("o produto tem procedência do Norte\n"); break;
          case 3: printf ("o produto tem procedência do Leste\n"); break;
          case 4: printf ("o produto tem procedência do Oeste\n"); break;
          case 5: printf ("O produto tem procedência do Nordeste\n"); break;
          case 6: printf ("O produto tem procedência do Nordeste\n"); break;
          case 7: printf ("O produto tem procedência do Sudeste\n"); break;
          case 8: printf ("O produto tem procedência do Sudeste\n"); break;
          case 9: printf ("O produto tem procedência do Sudeste\n"); break;
          case 10: printf ("O produto tem procedência do Centro Oeste\n"); break;
          case 11: printf ("O produto tem procedência do Centro Oeste\n"); break;
          case 12: printf ("O produto tem procedência do Nordeste\n"); break;
          case 13: printf ("O produto tem procedência do Nordeste\n"); break;
          case 14: printf ("O produto tem procedência do Nordeste\n"); break;
          case 15: printf ("O produto tem procedência do Nordeste\n"); break;
          default: printf("O produto é importado\n");
        }
      
    }
  return 0;
}
