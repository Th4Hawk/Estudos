#include <stdio.h>

int soma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int calculo = soma(1, 2);
    printf("O resultado da soma é %d\n", calculo);
    return 0;
}