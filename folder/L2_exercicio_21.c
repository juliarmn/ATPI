#include <stdio.h>

int main () {
  int i = 32;
  while (i < 128) {
    printf (" %c ", i);
    if (i % 10 == 2) {
      printf ("\n");
    }
  }
  i ++;
  return 0;
}
