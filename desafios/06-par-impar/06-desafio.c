// Par ou ímpar - Leia um número inteiro e informe se ele é par ou ímpar.

#include <stdio.h>

int main(){
    int numero;
    int resto_div;

    printf("Digite um número: ");
    scanf("%d", &numero);

    resto_div = numero % 2;

    if (resto_div == 0)
    {
        printf("Este número é par.\n");
    } else {
        printf("Este número é impar.\n");
    }

    return 0;

}