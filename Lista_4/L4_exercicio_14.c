/*Elabore um programa para calcular e escrever:
 Total de votos para cada candidato;
 Total de votos nulos;
 Total de votos em branco;
 Percentual dos votos branco e nulo sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0. O programa deve permitir apenas
entradas válidas.*/

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int op, total_1 = 0, total_2 = 0, total_3 = 0, total_4 = 0, total_5 = 0, total_6 = 0, total = 0;
  do {
    do {
      printf("Digite sua opção:\n");
      printf("1 - Voto no candidato 1;\n");
      printf("2 - Voto no candidato 2;\n");
      printf("3 - Voto no candidato 3;\n");
      printf("4 - Voto no candidato 4;\n");
      printf("5 - Voto branco;\n");
      printf("6 - Voto nulo;\n");
      printf("0 - sair;\n");
      scanf("%d", &op);

      if (op < 0 || op > 6)
        printf("Opção inválida, digite novamente!!!\n);

    } while (op < 0 || op > 6);

    switch (op) {
      case 1:
        total_1 = total_1 + 1;
        break;
      case 2:
        total_2 = total_2 + 1;
        break;
      case 3:
        total_3 = total_3 + 1;
        break;
      case 4:
        total_4 = total_4 + 1;
        break;
      case 5:
        total_5 = total_5 + 1;
        break;
      case 6:
        total_6 = total_6 + 1;
        break;
    }
    total++;

  } while (op != 0);

  printf("O número de votos do candidato 1 é: %d\n", total_1);
  printf("O número de votos do candidato 2 é: %d\n", total_2);
  printf("O número de votos do candidato 3 é: %d\n", total_3);
  printf("O número de votos do candidato 4 é: %d\n", total_4);
  printf("O número de votos do candidato 5 é: %d\n", total_5);
  printf("O número de votos do candidato 6 é: %d\n", total_6);
  printf("A porcentagem de votos em branco é: %.2f\n", ((float)total_5 / (float)total) * 100);
  printf("A porcentagem de votos nulos é: %.2f\n", ((float)total_6 / (float)total) * 100);
  return 0;
}
