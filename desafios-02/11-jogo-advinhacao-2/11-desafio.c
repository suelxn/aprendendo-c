//  O programa deve sortear um número entre 1 e 100. O jogador informa palpites até acertar. A cada tentativa, informe se o número secreto é maior ou menor. Ao final, mostre a quantidade de tentativas. Conceitos envolvidos: stdlib.h, time.h, rand(), srand(), loops e condicionais.
// Pular linha: \n

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int secreto, palpite = 0, tentativas = 0;
    int lidos, c;

    srand(time(NULL));
    secreto = rand() % 100 + 1;

    do {
        printf("Digite seu palpite (1 a 100): ");
        lidos = scanf("%d", &palpite);

        if (lidos == EOF) {
            return 1;
        }

        if (lidos != 1) {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Entrada inválida. Digite apenas números.\n\n");
            palpite = 0;
            continue;
        }

        tentativas++;

        if (palpite < secreto) {
            printf("O número secreto é maior que %d.\n\n", palpite);
        } else if (palpite > secreto) {
            printf("O número secreto é menor que %d.\n\n", palpite);
        }

    } while (palpite != secreto);

    printf("\nParabéns! Você acertou em %d tentativa(s).\n", tentativas);

    return 0;

}
