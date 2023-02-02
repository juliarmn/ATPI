#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  float KM, L, C;
  char op;
  printf ("\t\tMenu\n");
  printf ("------------");
  printf ("'G' ou 'g' para gasolina");
  printf ("'A' ou 'a' para álcool");
  printf ("'D' ou 'd' para diesel");
  scanf (" %c", &op);
  printf ("Digite respectivamente o número de Km e o consumo médio de combustível por km\n ");
  scanf("%f %f", &KM, &C);
  switch (op)
  {
    case 'G':
       printf ("O custo combustível será %.2f\n", C * KM * 4.79); break;
      
    case'A':
       printf("o custo combustível será %.2f\n",  C * KM * 2.68); break;
  
     case 'D':
       printf("o custo combustível será %.2f\n", C * KM * 2.64); break;
  }
  return 0;
}
