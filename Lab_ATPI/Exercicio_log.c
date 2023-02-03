#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  double x, sinal = -1, N;
  double potencia, denominador = 1, termo, soma = 0;
  do{
    printf("\nDigite uma valor para o x em log(1 + x), sendo este valor entre -1 e 1\n");
    scanf("%lf", &x);
    prinf("\nDigite um valor que delimite a potência\n");
    scanf("%lf", &N);
   }while(x < -1 && x > 1 || N < 0);
   for(int i = 0; i < N; i ++){
    potencia = potencia * x;
    sinal = - sinal;
    denominador += 1;
    termo = (sinal * potencia) / denominador;
    soma += termo;
   }
   printf("\nO log de (1 + %lf) é %lf\n", x, soma);
  //system("pause");
  return 0;
}
