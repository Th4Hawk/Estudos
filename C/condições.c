#include <stdio.h>

int main ()
{
  int numero;
  printf("Por favor, informe sua idade: ");
  scanf("%d", &numero);
  if (numero < 18) {
    printf("Você é menor de idade, logo não pode beber\n");
  } else {
    printf("Você é maior de idade, logo pode beber\n");
  }
  return 0;
}
