// Represente uma sala com 4 linhas e 5 assentos por linha utilizando uma matriz de inteiros, onde 0 significa disponível e 1 ocupado. Permita reservar assentos enquanto o usuário desejar. Não permita reservar um assento já ocupado e exiba o mapa após cada operação. Conceitos envolvidos: Matrizes como estado de sistema, índices, loops, validação e atualização.
// Pular linha: \n

#include <stdio.h>

#define LINHAS 4
#define COLUNAS 5

void exibir_mapa (int sala[LINHAS][COLUNAS]);

int main (){

    int sala[LINHAS][COLUNAS] = {0};
    int linha, coluna;
    char continuar;

    exibir_mapa(sala);

    do {
        printf("\nDigite a linha (1 a %d): ", LINHAS);
        scanf("%d", &linha);
        printf("Digite a coluna (1 a %d): ", COLUNAS);
        scanf("%d", &coluna);

        if (linha < 1 || linha > LINHAS || coluna < 1 || coluna > COLUNAS) {
            printf("Assento inválido.\n");
        } else if (sala[linha - 1][coluna - 1] == 1) {
            printf("Esse assento já está ocupado.\n");
        } else {
            sala[linha - 1][coluna - 1] = 1;
            printf("Assento reservado com sucesso.\n");
        }

        exibir_mapa(sala);

        printf("\nDeseja reservar outro assento? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;

}

void exibir_mapa (int sala[LINHAS][COLUNAS]){
    int i, j;

    printf("\nMapa da sala (0 = disponível, 1 = ocupado):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", sala[i][j]);
        }
        printf("\n");
    }
}
