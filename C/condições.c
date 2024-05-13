#include <stdio.h>

void main() {
    int numero;

    printf("Digite sua idade: ");
    scanf("%d", &numero);

    if (numero >= 18) {
        printf("Pode beber\n");
    }
    else {
        printf("Não pode beber");
    }
}