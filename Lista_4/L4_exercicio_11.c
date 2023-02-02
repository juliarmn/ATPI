#include <stdio.h>

int main(void) {
  char nome[40], endereço[120], cidade[40], estado[40];
  int fone, dia, diaria;
  float preço, hotel;
  hotel = 0;
  diaria = 0;
  for (int i = 1; i <= 2; i++) {
    printf("\ndigite seu nome\n");
    scanf(" %[^\n]s", &nome);
    printf("digite seu Estado\n");
    scanf(" %[^\n]s", &estado);
    printf("digite sua cidade\n");
    scanf(" %[^\n]s", &cidade);
    printf("digite seu endereço\n");
    scanf(" %[^\n]s", &endereço);
    printf("digite seu telefone\n");
    scanf(" %d", &fone);
    printf("digite o número de diárias\n");
    scanf(" %d", &dia);
    if (dia < 15) {
      preço = 300 * dia + 20;
    }
    else if (dia == 15) {
      preço = 300* dia + 14;
    }
    else {
    preço = 300* dia + 12;
    }
    printf ("O nome do hóspede é %s; \n O endereço é %s; \n o Estado é %s, \n A cidade é %s; O telefone é %d; \n O número de diárias é %d; \nO total a pagar pelo hóspede é %.2f", nome, endereço, estado, cidade, fone, dia, preço); 
    hotel = preço + hotel;
    diaria = dia + diaria;
  }
  printf ("\nO ganho total do hotel é %.2f", hotel);
  printf ("\nO  total de diárias é %d", diaria);
  return 0;
  }
