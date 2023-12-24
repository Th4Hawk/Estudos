#include <stdio.h>

int main() {
    // Typecast implicito
    int numero = 10;
    float numero_float = numero;
    // Typecast explicito
    double numero2 = 10.1;
    int *numero3 = (int *)&numero;
    // Typecast com ponteiros
    double numero4 = 10.1;
    int *numero5 = (int *)&numero;
    // Typecast com ponteiros do tipo void
    void *ponteiro_generico;
    int *ponteiro_inteiro = (int *)ponteiro_generico;
}