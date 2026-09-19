// Maior entre três números - Leia três números e determine o maior deles.

#include <stdio.h>

int main (){
    int numero1;
    int numero2;
    int numero3;
    int maior;

    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);
    printf("Digite mais um número: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("O número %d é maior.\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("O número %d é maior.\n", numero2);
    } else {
        printf("O número %d é maior.\n", numero3);
    }

    return 0;

}