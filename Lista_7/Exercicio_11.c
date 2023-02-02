#include <math.h>
#include <stdio.h>
#include <locale.h>
/*Faça um programa capaz de ler as coordenadas (x e y) que definem cinco pontos em um plano cartesiano.
Considere o primeiro ponto como referência e, em seguida, o programa deve imprimir o ponto lido que
tem a menor distância em relação ao ponto de referência. Apresente também a distância entre os dois
pontos.*/
#define n 5
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int x[n], y[n], aux;
  float dist, menorDist;
  for (int i = 0; i < n; i++) {
    printf("\nDigite o ponto cartesiano\n");
    scanf("%d %d", &x[i], &y[i]);
    if (i > 0) {
      dist = sqrt(pow(x[i] - x[0], 2) + pow(y[i] - y[0], 2));
      if (i == 1) {
        menorDist = dist;
        aux = i;
      } else if (dist < menorDist) {
        menorDist = dist;
        aux = i;
      }
    }
  }
  printf("\nO ponto de menor distância do ponto inicial (%d, %d) é o ponto (%d, %d)\n", x[0], y[0], x[aux], y[aux]);
  return 0;
}
