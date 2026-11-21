// Crie um menu com as opções: 1 - Suporte técnico; 2 - Financeiro; 3 - Comercial; 4 - Cancelamento. Leia a opção e, utilizando switch, informe para qual setor o atendimento será encaminhado. Trate opções inválidas.  Conceitos envolvidos: switch/case, break e validação.
// Pular linha: \n

#include <stdio.h>

int main (){

    int opcao;

    printf("Escolha o setor para o atendimento:\n");
    printf("1 - Suporte técnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Comercial\n");
    printf("4 - Cancelamento\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Atendimento encaminhado para o Suporte técnico.\n");
        break;
    case 2:
        printf("Atendimento encaminhado para o Financeiro.\n");
        break;
    case 3:
        printf("Atendimento encaminhado para o Comercial.\n");
        break;
    case 4:
        printf("Atendimento encaminhado para o Cancelamento.\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;

}
