//  Defina uma senha numérica no programa e continue solicitando a senha enquanto o usuário não informar o valor correto. Ao acertar, exiba uma mensagem de acesso permitido.
// Pular linha: \n

#include <stdio.h>

int main (){

    int senha = 1234;
    int tentativa = 0;
    int lidos;
    int c;

    do {
        printf("Digite a senha: ");
        lidos = scanf("%d", &tentativa);

        if (lidos == EOF) {
            return 1;
        }

        if (lidos != 1) {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Entrada inválida. Digite apenas números.\n\n");
            tentativa = 0;
            continue;
        }

        if (tentativa != senha) {
            printf("Senha incorreta. Tente novamente.\n\n");
        }

    } while (tentativa != senha);

    printf("Acesso permitido!\n");

    return 0;

}
