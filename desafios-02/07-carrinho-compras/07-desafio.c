// Leia sucessivamente os preços dos produtos de uma compra. O valor 0 encerra o registro. Ao final, exiba a quantidade de produtos e o total da compra. Valores negativos devem ser rejeitados. Conceitos envolvidos: Loop com sentinela, contador, acumulador e validação
// Pular linha: \n

#include <stdio.h>

int main (){

    float preco, total = 0;
    int quantidade = 0;

    do {
        printf("Digite o preço do produto (0 para encerrar): R$ ");
        scanf("%f", &preco);

        if (preco < 0) {
            printf("Valor negativo não é permitido. Tente novamente.\n");
        } else if (preco > 0) {
            total += preco;
            quantidade++;
        }

    } while (preco != 0);

    printf("\nQuantidade de produtos: %d\n", quantidade);
    printf("Total da compra: R$ %.2f\n", total);

    return 0;

}
