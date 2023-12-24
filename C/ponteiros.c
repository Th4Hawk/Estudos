#include <stdio.h>

int main() {
  int numero = 10;
  int *ponteiro = &numero;
  
  printf("%d", *ponteiro);
  return 0;
}