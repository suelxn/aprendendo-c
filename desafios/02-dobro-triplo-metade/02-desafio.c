// Dobro, triplo e metade - Leia um número e mostre seu dobro, triplo e metade.

#include <stdio.h>

int main () {
    float numero;
    printf("Digite um numero: ");
    fflush(stdout); // força a exibição do prompt antes de ler a entrada
    scanf("%f", &numero);
    printf("Dobro: %.1f\n", numero*2);
    printf("Triplo: %.1f\n", numero*3);
    printf("Metade do número: %.1f\n", numero/2);
    return 0;

}