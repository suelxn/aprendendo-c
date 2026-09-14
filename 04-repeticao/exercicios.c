#include <stdio.h>

int main() {
    // Exercicio 1: imprimir numeros de 1 a 10 usando for
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Exercicio 2: somar numeros digitados ate o usuario digitar 0, usando while
    int numero, soma = 0;
    printf("Digite numeros (0 para parar): ");
    scanf("%d", &numero);
    while (numero != 0) {
        soma += numero;
        scanf("%d", &numero);
    }
    printf("Soma total: %d\n", soma);

    // Exercicio 3: tabuada de um numero usando do-while
    int base = 5, i = 1;
    do {
        printf("%d x %d = %d\n", base, i, base * i);
        i++;
    } while (i <= 10);

    return 0;
}
