#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int vetor[6], negativo[6]={0, 0, 0, 0, 0, 0}, soma = 0;
float media;
for(int i=0; i<6; i++){
  printf("\nDigite o valor do vetor na posição %d(ao menos uma deve ser negativo)\n", i);
  scanf("%d", &vetor[i]);
}
for(int i=0; i<6; i++){
  if(vetor[i]<0){
    negativo[i]=vetor[i];
  }
}
for(int i=0; i<6; i++){
  soma+=negativo[i];
}
media=soma/6;
printf("\nA média é %f\n", media);
//system("PAUSE");
return 0;
}
