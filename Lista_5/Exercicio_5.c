#include <stdio.h> 
#include <locale.h>
/*Escreva um programa para simular as operações de uma pilha (First in last out - FILO), com
10 posições. O primeiro elemento a ser empilhado é o último a ser retirado da pilha. Este tipo de
estrutura é comumente utilizado para gerenciar chamadas de funções, por exemplo. O programa
deve ter as operações de inserção e remoção. O processo de remoção não é físico. Uma
remoção deve ser controlada por uma indicação lógica.*/
#define size 10
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int pilha[size], i = 0, op;
  do {
    printf("\t\t------simulação de pilha-----\n");
    printf("Qual o peração você deseja fazer?\n");
    printf("1.Inserção;\n2.Remoção;\n3.Ver elemento da pilha;\n4.Sair;\n");
    scanf("%d", &op);
    if (op > 4 || op < 0) {
      printf("\nDigite uma entrada válida\n");
    }  // validação
    else {
      if (op == 1) {
        if (i < size) {
          printf("\nDigite o elemento que você deseja colocar na fila\n");
          scanf("%d", &pilha[i]);
          i++;
        } else {
          printf("\nNão há elementos para colocar\n");
        }
      }
      if (op == 2) {
        if (i > 0) {
          i--;
        } else {
          printf("Não há elementos na pilha para retirar!!!\n");
        }
      }
      if (op == 3) {
        if (i > 0) {
          printf("O elemento na pilha na posição %d é %d", i, pilha[i]);
        } else {
          printf("\nNão temos elementos para mostrar\n");
        }
      }
    }
  } while (op != 4);
  return 0;
}
