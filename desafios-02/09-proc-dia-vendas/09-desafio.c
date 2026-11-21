// Leia o valor de várias vendas. O valor 0 encerra o expediente. Ao final, apresente quantidade de vendas, faturamento total e ticket médio. Ignore valores negativos e não permita divisão por zero. Conceitos envolvidos: Loops, acumuladores, contadores, validação e média.
// Pular linha: \n

#include <stdio.h>

int main (){

    float valor, total = 0;
    int quantidade = 0;

    do {
        printf("Digite o valor da venda (0 para encerrar): R$ ");
        scanf("%f", &valor);

        if (valor < 0) {
            printf("Valor negativo ignorado.\n");
        } else if (valor > 0) {
            total += valor;
            quantidade++;
        }

    } while (valor != 0);

    printf("\nQuantidade de vendas: %d\n", quantidade);
    printf("Faturamento total: R$ %.2f\n", total);

    if (quantidade > 0) {
        printf("Ticket médio: R$ %.2f\n", total / quantidade);
    } else {
        printf("Ticket médio: não há vendas registradas.\n");
    }

    return 0;

}
