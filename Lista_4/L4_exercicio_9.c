#include <stdio.h>

int main(void) {
  int Fibonacci[15], n1, n, fib, i; 
  fib = 1;
  n = 1;
  n1 = 1;
  Fibonacci[0] = fib;
  Fibonacci[1] = n;
  for (int i = 2; i < 15; i ++) {
    fib += n;
    n = n1;
    n1 = fib;
    Fibonacci[i] = fib;
  }
  for (int i = 0; i < 15; i ++) {
    printf("%d\n", Fibonacci[i]);
  } //inverso
   for (int i = 14; i > 0; i--){
    printf("%d\n", Fibonacci[i]);
  } 
  return 0;
}
