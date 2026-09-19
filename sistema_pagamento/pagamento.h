#ifdef PAGAMENTO_H
#define PAGAMENTO_H

float calcularDesconto(float valor, int formaPagamento);

float calcularTotal(float valor, float desconto);

void exibirFormasPagamento() {
    printf("Formas de pagamento")
}

#endif