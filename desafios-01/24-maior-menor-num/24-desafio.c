// Leia uma quantidade N de números e informe o maior e o menor valor encontrados.
// Pular linha: \n

#include <stdio.h>

int main (){

    int n, numero, maior, menor, i;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade deve ser maior que zero.\n");
    } else {
        printf("Digite o 1 número: ");
        scanf("%d", &numero);
        maior = numero;
        menor = numero;

        for (i = 2; i <= n; i++) {
            printf("Digite o %d número: ", i);
            scanf("%d", &numero);

            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        printf("\nO maior valor encontrado foi: %d\n", maior);
        printf("O menor valor encontrado foi: %d\n", menor);
    }

    return 0;

}
