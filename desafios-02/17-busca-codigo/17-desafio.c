//  Leia 10 códigos numéricos e armazene-os em um vetor. Depois, solicite um código para busca. Informe se ele existe e, caso exista, em qual índice foi encontrado. Considere inicialmente apenas a primeira ocorrência. Conceitos envolvidos: Vetores, busca sequencial, índices e condição de parada.
// Pular linha: \n

#include <stdio.h>

#define QUANTIDADE 10

int main (){

    int codigos[QUANTIDADE], busca, i, indice = -1;

    for (i = 0; i < QUANTIDADE; i++) {
        printf("Digite o código %d: ", i + 1);
        scanf("%d", &codigos[i]);
    }

    printf("\nDigite o código a ser buscado: ");
    scanf("%d", &busca);

    for (i = 0; i < QUANTIDADE && indice == -1; i++) {
        if (codigos[i] == busca) {
            indice = i;
        }
    }

    if (indice == -1) {
        printf("O código %d não foi encontrado.\n", busca);
    } else {
        printf("O código %d foi encontrado no índice %d.\n", busca, indice);
    }

    return 0;

}
