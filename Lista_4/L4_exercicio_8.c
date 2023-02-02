#include <stdio.h>
#define size 200

int main(void) {
 //declarção de variáveis
 int num, i;
 for (i = 0; i <= size; i ++) { 
   if ((i / 4) * 4 == i) {
     printf(" %d\n", i);
   } else {
     continue;
   }
 }
 return 0;
}
