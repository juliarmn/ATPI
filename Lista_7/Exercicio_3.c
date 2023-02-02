#include <stdio.h>
#include <locale.h>
/*Faça um programa em Linguagem C para criar um registro que permita armazenar os dados comumente
contidos em um cheque bancário. O programa deve permitir entrada e saída dos dados.*/
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  typedef struct data {
    int dia;
    int mes;
    int ano;
  } Tdata;
  typedef struct dados {
    int num;
    int agencia;
    char nome[50];
  } Tdado;
  struct cheque {
    Tdata data;
    Tdado dados;
    char valorStr[60];
    float valor;
    char localEm[30];
    // assinatura
  } cheque;
  printf("\nDigite o dia\n");  // validar tudo depois juju gatinha (digitado por ela mesma), bjs
  scanf("%d", &cheque.data.dia);
  printf("\nDigite o mês\n");  // validar tudo depois juju gatinha (digitado por ela mesma), bjs
  scanf("%d", &cheque.data.mes);
  printf("\nDigite o ano\n");  // validar tudo depois juju gatinha (digitado por ela mesma), bjs
  scanf("%d", &cheque.data.ano);
  printf("\nDigite o número da conta\n");
  scanf("%d", &cheque.dados.num);
  printf("\nDigite o número da agência\n");
  scanf("%d", &cheque.dados.agencia);
  printf("\nDigite o nome\n");
  scanf(" %[^\n]s", cheque.dados.nome);
  printf("\nDigite o valor da sua checa\n");
  scanf("%f", &cheque.valor);
  printf("\nDigite o valor da sua checa por extenso\n");
  scanf(" %[^\n]s", cheque.valorStr);
  printf("\nDigite o local da emissão\n");
  scanf(" %[^\n]s", cheque.localEm);
  // mostrar tudo depois com for
  return 0;
}
