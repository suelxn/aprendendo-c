// Leia o valor de uma compra. Compras a partir de R$ 200,00 recebem frete grátis; as demais pagam R$ 20,00 de frete. Exiba o valor da compra, o frete e o total do pedido. Conceitos envolvidos: Condicionais, operadores relacionais e regra de negócio
// Pular linha: \n

#include <stdio.h>

int main (){

    float valor_compra, frete, total;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    if (valor_compra >= 200) {
        frete = 0;
    } else {
        frete = 20;
    }

    total = valor_compra + frete;

    printf("\nValor da compra: R$ %.2f\n", valor_compra);
    printf("Frete: R$ %.2f\n", frete);
    printf("Total do pedido: R$ %.2f\n", total);

    return 0;

}
