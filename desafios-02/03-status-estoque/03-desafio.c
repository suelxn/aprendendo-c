// Leia a quantidade disponível de um produto. Exiba “Disponível” quando houver unidades em estoque e “Esgotado” quando a quantidade for zero. Faça uma versão com if/else e outra utilizando operador ternário. Conceitos envolvidos: if/else e operador ternário.
// Pular linha: \n

#include <stdio.h>

int main (){

    int quantidade;

    printf("Digite a quantidade disponível do produto: ");
    scanf("%d", &quantidade);

    if (quantidade > 0) {
        printf("\nVersão if/else: Disponível\n");
    } else {
        printf("\nVersão if/else: Esgotado\n");
    }

    printf("Versão ternário: %s\n", quantidade > 0 ? "Disponível" : "Esgotado");

    return 0;

}
