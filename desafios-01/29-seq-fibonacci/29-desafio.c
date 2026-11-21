// Leia a quantidade N de termos desejada e apresente os primeiros N termos da sequência de Fibonacci.
// Pular linha: \n

#include <stdio.h>

int main (){

    int n, i;
    long long anterior = 0, atual = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida. Digite um número positivo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%lld\n", anterior);

            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
    }

    return 0;

}
