#include <stdio.h>

int main() {
    // if, else, else if

    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if (idade > 18) {
        printf("Você é maior de 18 anos, pode beber\n");
    } else if (idade < 18) {
        printf("Você é menor de 18 anos, não pode beber\n");
    }
    
    return 0;
}