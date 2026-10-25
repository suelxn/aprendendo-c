// Antecessor e sucessor - Leia um número inteiro e exiba seu antecessor e seu sucessor.

#include <stdio.h>

int main() {
int numero;

    printf("Digite um numero: ");
    fflush(stdout); // força a exibição do prompt antes de ler a entrada
    scanf("%d\n", &numero);
    printf("Antecessor: %d\n", numero-1);
    printf("Sucessor: %d\n", numero+1);
    return 0;

}