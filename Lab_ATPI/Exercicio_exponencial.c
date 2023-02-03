#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  int x, N, denominador, potencia;
  double termo, soma = 0;
  potencia = 1;
  denominador = 1;
  printf("\nDigite um expoente\n");
  scanf("%d", &x);
  do{
    printf("\nDigite um número para delimitar o cálculo da exponencial\n");
    scanf("%d", &N);
    }while(N <= 0);
  for(int i = 1; i <= N; i ++){
    potencia = potencia * x;
    denominador = denominador * i;
    termo = potencia / denominador;
    soma += termo;
  }
  printf("\nO exponencial de 'e' elevado a %d é %lf\n", x, soma);
  //system("pause");
  return 0;
}
