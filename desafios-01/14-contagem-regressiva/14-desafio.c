// Contagem regressiva - Leia um número inteiro positivo N e faça uma contagem regressiva de N até zero.

#include <stdio.h>

int main(){
    int n, i;

    printf("Digite um número positivo para visualizar todos os números antecessores: \n");
    scanf("%d", &n);

    if (n<0)
    {
        printf("Números negativos estão inválidos.\n");
    } else {
        for (i = n; i >= 0; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}