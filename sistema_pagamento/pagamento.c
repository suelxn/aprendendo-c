// pagamento.c - Implementação do módulo de pagamento.
// Concentra toda a lógica de negócio (cálculo de desconto, cálculo do total
// e exibição das formas de pagamento), separada da interação com o usuário
// feita em main.c. Implementa o que foi declarado em pagamento.h.

#include <stdio.h>
#include "pagamento.h"

float calcularDesconto(float valor, int formaPagamento) {
    if (formaPagamento == 1) {
        return valor * 0.05;
    }
    return 0;
}

float calcularTotal(float valor, float desconto) {
    return valor - desconto;
}

void exibirFormasPagamento(void) {
    printf("Formas de pagamento:\n");
    printf("1 - Dinheiro/Pix (5%% de desconto)\n");
    printf("2 - Cartao de Debito\n");
    printf("3 - Cartao de Credito\n");
}
