// Leia um número inteiro positivo e determine se ele é primo.
// Pular linha: \n

#include <stdio.h>

int main (){

    int numero, i, divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido. Digite um número positivo.\n");
    } else {
        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d é um número primo.\n", numero);
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    return 0;

}
