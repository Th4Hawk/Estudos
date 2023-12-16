/*
    Exercicio: Qual será a impressão obtida por cada uma dessas instruções? Assuma que fazem parte de um programa completo.
    a) printf("Bom dia!Shirley.");
       printf("Você já tomou café ?\n");
    b) printf("A solução não existe!\nNão insista");
    c) printf("Duas linhas de saida\nou uma ?");

    Impressões obtidas:
    a -> "Bom dia!Shirley.Vocẽ já tomou café ?"
    b -> "A solução não existe!"
         "Não insista"    
    c -> "Duas linhas de saida"
         "ou uma ?"
*/

#include <stdio.h>

int main() {
    printf("Bom dia!Shirley.");
    printf("Você já tomou café ?\n");
    printf("A solução não existe!\nNão insista");
    printf("Duas linhas de saida\nou uma ?");
    return 0;
}