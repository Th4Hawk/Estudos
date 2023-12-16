/*
    Exercicio: Um dos alunos preparou o seguinte programa e o apresentou para ser avaliado. Ajude-o.
    Codigo: 

    int main() {
        prinf(Existem %d semanas no ano., 56)
    }

    Correções: 
    1 - A Mensagem "Existem %d semanas no ano" não está em aspas duplas, o que ira causar um erro de compilação
    2 - 1 ano possui 52 semanas, não 56
*/

#include <stdio.h>

int main() {
    printf("Existem %d semanas no ano.\n", 52);

    return 0;
}