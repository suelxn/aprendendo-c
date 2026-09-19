// pagamento.h - Interface (contrato) do módulo de pagamento.
// Declara os protótipos das funções que outros arquivos (como main.c) podem
// usar, sem expor como elas são implementadas. É por meio deste arquivo que
// main.c "enxerga" o módulo pagamento.c, mantendo os dois desacoplados.

#ifndef PAGAMENTO_H
#define PAGAMENTO_H

float calcularDesconto(float valor, int formaPagamento);

float calcularTotal(float valor, float desconto);

void exibirFormasPagamento(void);

#endif
