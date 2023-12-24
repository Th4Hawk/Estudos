#include <stdio.h>

struct Pessoa {
   char nome[50];
   int idade;
   float altura;
};

int main() {
  
  struct Pessoa pessoa1 = {"Souza", 10, 1.40};
  
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Altura: %f\n", pessoa1.altura);

  return 0;
}