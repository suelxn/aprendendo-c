// Leia 10 números e informe qual foi o maior valor digitado.
// Pular linha: \n

#include <stdio.h>

int main (){

    int numero, maior, i;

    printf("Digite o 1 número: ");
    scanf("%d", &numero);
    maior = numero;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;

}
