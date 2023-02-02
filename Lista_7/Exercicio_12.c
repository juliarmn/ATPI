#include <math.h>
#include <stdio.h>
#include <locale.h>
/*A partir do registro indicado para resolver o exercício 12, crie uma estrutura chamada retângulo. Faça um
programa que receba (via teclado) as informações que permitem definir um retângulo e informe: área e o
comprimento de cada aresta.*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  struct ret {
    float x[4];
    float y[4];
    float aresta1;
    float aresta2;
    float aresta3;
    float aresta4;
  } retangulo;

  for (int i = 0; i < 4; i++) {
    printf("\nDigite o ponto 'x' %d do retângulo\n", i);
    scanf("%f", &retangulo.x[i]);
    printf("\nDigite o ponto 'y' %d do retângulo\n", i);
    scanf("%f", &retangulo.y[i]);
  }
  retangulo.aresta1 = sqrt((pow(retangulo.x[1] - retangulo.x[0], 2)) + (pow(retangulo.y[1] - retangulo.y[0], 2)));
  retangulo.aresta3 = sqrt(pow(retangulo.x[3] - retangulo.x[2], 2) + pow(retangulo.y[3] - retangulo.y[2], 2));
  if (retangulo.aresta1 == retangulo.aresta2 && retangulo.aresta2 != retangulo.aresta3 && retangulo.aresta3 == retangulo.aresta4) {
    printf("\nAs arestas são: %0.2f *2 e %0.2f * 2\n", retangulo.aresta1, retangulo.aresta3);
    printf("\nA área é: %0.2f\n", (retangulo.aresta1 * retangulo.aresta3));
  } else {
    printf("\nNÃO É RETÂNGULO\n");
  }
  return 0;
}
