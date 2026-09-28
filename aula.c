// Anotações e testes rápidos realizados durante a aula de Introdução a C
/*
#include <stdio.h>
#include <stdbool.h>

int main (){
    int vetor[5] = {10, 20, 30, 40, 50};
    int numero;
    bool encontrado = false;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 0; i < 5; i++) {
        if(vetor[i] == numero) {
            encontrado = true;
            break;

        }
    }

if (encontrado) {
    printf("O número %d está presente no vetor.\n", numero);
} else {
    printf("O número %d não está presente no vetor.\n", numero);
}

return 0;

}
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int vetor [5];

    printf("Insira os elementos do vetor: \n");

    // Preenchendo o vetor com valores fornecidos pelo usuário
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: \n",  i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor inserido pelo usuário: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}

