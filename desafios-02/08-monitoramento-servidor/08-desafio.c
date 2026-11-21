// Leia percentuais de uso da CPU até que seja informado -1. Classifique cada leitura como NORMAL (até 69%), ALERTA (70% a 89%) ou CRÍTICO (90% a 100%). Ao final, informe o número de leituras e quantas foram críticas. Conceitos envolvidos: while, if/else, contador, sentinela, break/continue.
// Pular linha: \n

#include <stdio.h>

int main (){

    float uso;
    int leituras = 0, criticas = 0;

    while (1) {
        printf("Digite o percentual de uso da CPU (-1 para encerrar): ");
        scanf("%f", &uso);

        if (uso == -1) {
            break;
        }

        if (uso < 0 || uso > 100) {
            printf("Percentual inválido. Tente novamente.\n");
            continue;
        }

        leituras++;

        if (uso >= 90) {
            printf("CRÍTICO\n");
            criticas++;
        } else if (uso >= 70) {
            printf("ALERTA\n");
        } else {
            printf("NORMAL\n");
        }
    }

    printf("\nNúmero de leituras: %d\n", leituras);
    printf("Leituras críticas: %d\n", criticas);

    return 0;

}
