#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float IMC, peso, altura;
  printf ("Digite sua altura em metros e seu peso em KG\n");
  scanf ("%f %f", &altura, &peso);
  IMC = KG / (altura * altura);
  if (IMC < 18.5)
    printf("Desnutrição\n");
  
  else if (IMC >= 18.5 && IMC <= 24.5)
    printf("Peso normal\n");
  
   else if (IMC >= 25 && IMC <= 29)
    printf("Sobrepeso\n");
  
   else if (IMC >= 30 && IMC <= 39.9)
    printf("Obesidade\n");
  
   else
    printf("Obesidade mórbida\n");
  
  return 0;
}
