// Leia 10 números e, ao final, informe quantos valores são positivos e quantos são negativos. Caso deseje, contabilize separadamente os valores iguais a zero.
// Pular linha: \n

#include <stdio.h>

int main (){

    float numero;
    int positivos = 0, negativos = 0, zeros = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d número: ", i);
        scanf("%f", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("\nQuantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Quantidade de valores iguais a zero: %d\n", zeros);

    return 0;

}
