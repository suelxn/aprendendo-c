// Armazene em um vetor o valor de 10 vendas. Crie funções para exibir todas as vendas, calcular o faturamento, localizar a maior venda e contar quantas vendas ultrapassaram R$ 500,00. Conceitos envolvidos: Vetores em funções, percorrimento, acumuladores e condicionais.
// Pular linha: \n

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUANTIDADE 10

float ler_valor (int numero);
void exibir_vendas (float vendas[], int tamanho);
float calcular_faturamento (float vendas[], int tamanho);
int localizar_maior_venda (float vendas[], int tamanho);
int contar_vendas_acima (float vendas[], int tamanho, float limite);

int main (){

    float vendas[QUANTIDADE];
    int i, indice_maior;

    for (i = 0; i < QUANTIDADE; i++) {
        vendas[i] = ler_valor(i + 1);
    }

    exibir_vendas(vendas, QUANTIDADE);
    printf("\nFaturamento total: R$ %.2f\n", calcular_faturamento(vendas, QUANTIDADE));

    indice_maior = localizar_maior_venda(vendas, QUANTIDADE);
    printf("Maior venda: venda %d, no valor de R$ %.2f\n", indice_maior + 1, vendas[indice_maior]);
    printf("Vendas acima de R$ 500,00: %d\n", contar_vendas_acima(vendas, QUANTIDADE, 500));

    return 0;

}

void exibir_vendas (float vendas[], int tamanho){
    int i;

    printf("\nVendas registradas:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Venda %d: R$ %.2f\n", i + 1, vendas[i]);
    }
}

float calcular_faturamento (float vendas[], int tamanho){
    int i;
    float total = 0;

    for (i = 0; i < tamanho; i++) {
        total += vendas[i];
    }

    return total;
}

int localizar_maior_venda (float vendas[], int tamanho){
    int i, indice = 0;

    for (i = 1; i < tamanho; i++) {
        if (vendas[i] > vendas[indice]) {
            indice = i;
        }
    }

    return indice;
}

int contar_vendas_acima (float vendas[], int tamanho, float limite){
    int i, contador = 0;

    for (i = 0; i < tamanho; i++) {
        if (vendas[i] > limite) {
            contador++;
        }
    }

    return contador;
}

float ler_valor (int numero){
    char entrada[50];
    char *fim;
    char *p;
    float valor;

    while (1) {
        printf("Digite o valor da venda %d: R$ ", numero);

        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            exit(1);
        }

        for (p = entrada; *p != '\0'; p++) {
            if (*p == ',') {
                *p = '.';
            }
        }

        valor = strtof(entrada, &fim);

        if (fim != entrada && (*fim == '\n' || *fim == '\0')) {
            return valor;
        }

        printf("Valor inválido. Digite um número (ex: 32,98).\n");
    }
}
