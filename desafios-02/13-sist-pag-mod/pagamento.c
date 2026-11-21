#include <stdio.h>
#include "pagamento.h"

void exibir_formas_pagamento (void){
    printf("\nFormas de pagamento:\n");
    printf("1 - PIX (5%% de desconto)\n");
    printf("2 - Cartão\n");
    printf("3 - Dinheiro\n");
}

float calcular_desconto (float valor, int forma){
    if (forma == 1) {
        return valor * 0.05;
    }

    return 0;
}

float calcular_total (float valor, int forma){
    return valor - calcular_desconto(valor, forma);
}
