#include <stdio.h>
/*Considerando a estrutura dada a seguir para um vetor no R^3. Implemente um programa que calcule a soma de dois vetores.
struct Vetor{
float x; float y; float z;
};*/
int main(void) {
  struct julia {
    float x[4], y[4], z[4];
  } vetor;
  float somaVetX, somaVetY, somaVetZ;
  printf("\nDigite os pontos x´s do vetor 1\n");
  scanf("%f %f", &vetor.x[0], &vetor.x[1]);
  printf("\nDigite os pontos y´s do vetor 1\n");
  scanf("%f %f", &vetor.y[0], &vetor.y[1]);
  printf("\nDigite os pontos z´s do vetor 1\n");
  scanf("%f %f", &vetor.z[0], &vetor.z[1]);
  printf("\nDigite os pontos x´s do vetor 2\n");
  scanf("%f %f", &vetor.x[2], &vetor.x[3]);
  printf("\nDigite os pontos y´s do vetor 2\n");
  scanf("%f %f", &vetor.y[2], &vetor.y[3]);
  printf("\nDigite os pontos z´s do vetor 2\n");
  scanf("%f %f", &vetor.z[2], &vetor.z[3]);
  somaVetX = (vetor.x[1] - vetor.x[0]) + (vetor.x[3] - vetor.x[2]);
  somaVetY = (vetor.y[1] - vetor.y[0]) + (vetor.y[3] - vetor.y[2]);
  somaVetZ = (vetor.z[1] - vetor.z[0]) + (vetor.z[3] - vetor.z[2]);
  printf("\nVETOR 1= %.2f x + %.2f y + %.2f z\n", (vetor.x[1] - vetor.x[0]), (vetor.y[1] - vetor.y[0]), (vetor.z[1] - vetor.z[0]));
  printf("\nVETOR 2= %.2f x + %.2f y + %.2f z\n", (vetor.x[3] - vetor.x[2]), (vetor.y[3] - vetor.y[2]), (vetor.z[3] - vetor.z[2]));
  printf("\nVETOR SOMA=  %.2f x + %.2f y + %.2f z\n", somaVetX, somaVetY, somaVetZ);
  return 0;
}
