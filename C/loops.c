// Biblioteca para entrada/saida de dados
#include <stdio.h>

// Função main, a palavra chave "void" indica que a função não tem nenhum retorno.
// A função main é a primeira função a ser executada durante a execução de um programa, ela é obrigatoria.
void main() {
    // Variavel do tipo int (inteiro) inicializada com o valor 1
    int quantidade = 1;
    // Loop while, que continua rodando até a variavel "quantidade" ser maior que 10
    while (quantidade < 10)
    {   
        // Imprime a palavra "Loop"
        printf("Loop\n");
        // Incrementa um valor na variavel "quantidade"
        quantidade++;
    }
    
}