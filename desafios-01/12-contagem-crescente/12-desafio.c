// Contagem crescente - Leia um número inteiro positivo N e mostre todos os números de 1 até N.

#include <stdio.h>

int main(){
    int n, i;

    printf("Digite um número positivo para visualizar todos os números antecessores: \n");
    scanf("%d", &n);

    if (n<0)
    {
        printf("Números negativos estão inválidos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}