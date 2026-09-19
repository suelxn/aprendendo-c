// main.c - Ponto de entrada do programa.
// Responsável apenas pela interação com o usuário (ler o valor e a forma de
// pagamento, exibir o resultado). A lógica de cálculo fica isolada no módulo
// pagamento (pagamento.c/.h), então este arquivo só chama as funções
// declaradas em pagamento.h, sem saber como elas são implementadas.

#include <stdio.h>
#include "pagamento.h"

int main() {
    float valor, desconto, total;
    int formaPagamento;

    printf("=== Sistema de Pagamento ===\n\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    do {
        printf("\n");
        exibirFormasPagamento();
        printf("Escolha a forma de pagamento: ");
        scanf("%d", &formaPagamento);

        if (formaPagamento < 1 || formaPagamento > 3) {
            printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (formaPagamento < 1 || formaPagamento > 3);

    desconto = calcularDesconto(valor, formaPagamento);
    total = calcularTotal(valor, desconto);

    printf("\n--- Resumo do Pagamento ---\n");
    printf("Valor da compra: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
