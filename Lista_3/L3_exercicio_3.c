/*Construa um algoritmo para ler o sexo de uma pessoa (M ou F). Uma mensagem deverá ser emitida
caso o sexo seja válido.*/

#include <stdio.h>
int main (){
  char sexo;
  printf ("Digite a inicial maiúscula do seu gênero\n");
  scanf ("%c", &sexo);
  switch (sexo){
    case 'M': printf("Você é do gênero masculino");break;
    case 'F':printf("Você é do gênero feminino");break;
    default:printf ("Não reconheço seu gênero");break;
  }
  return 0;
}
