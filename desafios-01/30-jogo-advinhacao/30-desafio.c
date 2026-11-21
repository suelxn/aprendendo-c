// Defina um número secreto no programa. Solicite palpites repetidamente e informe se o número secreto é maior ou menor que o palpite fornecido. O programa deve terminar quando o usuário acertar e informar a quantidade de tentativas realizadas.
// Pular linha: \n

#include <stdio.h>

int main (){

    int segredo = 42;
    int palpite, tentativas = 0;

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < segredo) {
            printf("O número secreto é maior que %d.\n\n", palpite);
        } else if (palpite > segredo) {
            printf("O número secreto é menor que %d.\n\n", palpite);
        }

    } while (palpite != segredo);

    printf("\nParabéns! Você acertou em %d tentativa(s).\n", tentativas);

    return 0;

}
