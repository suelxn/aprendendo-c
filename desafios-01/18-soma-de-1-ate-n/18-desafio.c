// Leia um número inteiro positivo N e calcule a soma de todos os números entre 1 e N.

#include <stdio.h>

int main (){

    int n;
    int soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma dos números de 1 a %d é: %d\n", n, soma);

    return 0;

}