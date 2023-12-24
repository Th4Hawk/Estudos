#include <stdio.h>

int main() {
    int array[5] = {1,2,3,4,5};
    int *ponteiro_array = &array[0];
    printf("Valor inicial: %d\n", *ponteiro_array);
    ponteiro_array++;
    printf("Valor apos incremento: %d\n", *ponteiro_array);
    return 0;
}