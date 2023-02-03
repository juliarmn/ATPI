/*13.Escreva um programa que leia do teclado vários números inteiros. Quando um
número negativo for digitado, encerre o processo, calcule e mostre:
(a) A soma de todos os números digitados.
(b) A quantidade de números digitados.
(c) A média dos números digitados.
(d) O maior número digitado.
(e) O menor número digitado.*/
int main() {
  int num, soma = 0, maior, menor, i = 0;
  do {
    printf("\nDigite o primeiro número (maior que 0)\n");
    scanf("%d", &num);
    maio = num;
    menor = num;
    soma = num;
  } while (num < 0);
  while (num > 0) {
    soma += num;
    if (menor > num) {
      menor = num;
    }
    if (maior < num) {
      maior = num;
    }
    i++;
    printf("\nDigite um número\n");
    scanf("%d", &num);
  }
  printf("\nA soma de todos os números digitados é: %d\n", soma);
  printf("\nA quantidade digitada é: %d\n", i);
  printf("\nA média dos números digitados é: %.2f\n", (float)soma / i);
  printf("\nO maior é: %d\n o menor é: %d\n", maior, menor);
  // system("PAUSE");
  return 0;
}
