// Solicite ao usuário uma resposta S ou N. Aceite tanto letras maiúsculas quanto minúsculas. Continue solicitando enquanto a entrada for inválida e, ao final, informe se a operação continuará ou será encerrada. Conceitos envolvidos: ctype.h, toupper(), do/while, validação e ternário.
// Pular linha: \n

#include <stdio.h>
#include <ctype.h>

int main (){

    char resposta;

    do {
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

        if (resposta != 'S' && resposta != 'N') {
            printf("Resposta inválida. Digite S ou N.\n");
        }

    } while (resposta != 'S' && resposta != 'N');

    printf("\n%s\n", resposta == 'S' ? "A operação continuará." : "A operação será encerrada.");

    return 0;

}
