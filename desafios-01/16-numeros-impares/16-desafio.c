// Números ímpares - Leia um número inteiro positivo N e mostre todos os números ímpares existentes entre 1 e N.

#include <stdio.h>

int main (){

    int N;

    printf("Insira um número inteiro e positivo para descobrir todos os números pares que vem antes dele. \n");
    scanf("%d", &N);

    if (N <= 0) {
            printf("\nEsse número não é positivo.\n\n");
    } else (N <= 0);{
        for (int i = 1; i <= N; i+= 2) {
            printf("%d \n", i );
}

    return 0;

}
}
