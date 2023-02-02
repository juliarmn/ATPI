/*Faça um algoritmo para ler três valores. Os valores devem ser armazenados nas variáveis a, b e c.
Informar se a média dos números é maior que um dos números digitados.*/

#include <stdio.h>
//
int main(void) {
  float num_1, num_2, num_3, M;
  printf ("Digite 3 números\n");
  scanf ("%f %f %f",&num_1, &num_2, &num_3);
   M = (num_1 + num_2 + num_3) / 3;
  if (M > num_1 && M > num_2 && M > num_3)
  {
    printf ("A média %.2f entre esse 3 números é maior que os três números digitados\n", M);
  }
    else if (num_2 == num_1 && num_3 == num_2)
  {
    printf ("A média é igual aos 3 números \n");
  }
  else if (M < num_1)
  {
    printf ("O número %f é maior que a média %.2f \n", num_1, M);
  }
  else if (M < num_2)
  {
    printf ("O número %f é maior que a média %.2f \n"num_2, M);
  }
  else if (M < num_3)
  {
    printf ("O número %f é maior que a média %.2f \n",num_3, M);
  }
  return 0;
}
