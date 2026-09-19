// Maior entre dois números - Leia dois números e informe qual é o maior ou se os dois valores são iguais.

#include <stdio.h>

int main (){
    int numero1;
    int numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("O número %d é maior.\n", numero1);
    } else if (numero2 > numero1)
    {
        printf("Esse número %d é maior.\n", numero2);
    } else if (numero1 == numero2)
    {
        printf("Ambos os números são iguais.\n");
    }

    return 0;

}