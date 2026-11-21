//  Leia um número inteiro positivo e apresente todos os seus divisores.
// Pular linha: \n

#include <stdio.h>

int main (){

    int numero, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido. Digite um número positivo.\n");
    } else {
        printf("\nOs divisores de %d são:\n", numero);

        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;

}
