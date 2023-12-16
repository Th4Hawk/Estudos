/*
    Exercicio: O programa seguinte tem vários erros em tempo de compilação. Execute-o e observe as mensagens apresentadas por seu compilador.

    Codigo:

    int Main() {
        int a=1; b=2, c=3;
        printf("Os numeros são: %d %d %d\n,a,b,c,d)
    }

    Erros observados:
    1 - As variaveis "b" e "c" não foram declaradas, pois a instrução foi finalizada na declaração da variavel "a".
    2 - As aspas duplas na mensagem "Os numeros são: %d %d %d" não foram fechadas.
    3 - A variavel d não foi declarada.
    4 - A instrução prinft não foi finalizada de forma correta, já que o ponto e virgula(;) esta ausente.
    5 - É recomendado que a função main seja declarada em letras minusculas.
*/

#include <stdio.h>

int main() {
    int a=1, b=2, c=3, d=4;
    printf("Os numeros são: %d %d %d %d\n", a,b,c,d);
}