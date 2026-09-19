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

void exibirFormasPagamento

}