#include <stdio.h>

int main() {
    // Exercicio 1: preencher um vetor e calcular a soma dos elementos
    int vetor[5] = {2, 4, 6, 8, 10};
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    printf("Soma do vetor: %d\n", soma);

    // Exercicio 2: encontrar o maior elemento de um vetor
    int numeros[6] = {3, 7, 1, 9, 4, 5};
    int maior = numeros[0];
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("Maior elemento: %d\n", maior);

    // Exercicio 3: preencher uma matriz 2x2 e imprimir seus valores
    int matriz[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
