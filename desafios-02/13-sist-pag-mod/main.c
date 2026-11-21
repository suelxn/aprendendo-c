// Crie um programa que leia o valor da compra e a forma de pagamento. PIX concede 5% de desconto; cartão e dinheiro não concedem desconto. Organize o projeto em main.c, pagamento.c e pagamento.h. Crie funções para exibir formas de pagamento, calcular desconto e calcular o total. Conceitos envolvidos: Funções, arquivos .c/.h, protótipos, #include e separação de responsabilidades.
// Pular linha: \n

/* Para testar o programa, usei o comando: 
cd /home/suelen/Documentos/Projetos/aprendendo-c/desafios-02/13-sist-pag-mod
gcc main.c pagamento.c -o pagamento
./pagamento
*/

#include <stdio.h>
#include "pagamento.h"

int main (){

    float valor, desconto;
    int forma;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    exibir_formas_pagamento();

    do {
        printf("Escolha a forma de pagamento: ");
        scanf("%d", &forma);

        if (forma < 1 || forma > 3) {
            printf("Forma de pagamento inválida. Tente novamente.\n");
        }

    } while (forma < 1 || forma > 3);

    desconto = calcular_desconto(valor, forma);

    printf("\nValor da compra: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", calcular_total(valor, forma));

    return 0;

}
