// Positivo, negativo ou zero - Leia um número e determine se ele é positivo, negativo ou igual a zero.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (){
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Esse número é positivo.");
    }
    else if (numero < 0) {
        printf("Esse número é negativo");
    }
    else{
        printf("Esse número é 0.");
    }
    

    return 0;

}