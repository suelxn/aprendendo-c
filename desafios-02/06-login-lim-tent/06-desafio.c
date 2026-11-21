// Defina uma senha numérica no programa. O usuário poderá tentar entrar no sistema no máximo três vezes. Se acertar, exiba “Acesso autorizado”. Caso as três tentativas sejam consumidas, exiba “Usuário bloqueado”.  Conceitos envolvidos: while, contador, condicionais e operadores lógicos.
// Pular linha: \n

#include <stdio.h>

int main (){

    int senha = 1234;
    int tentativa;
    int tentativas = 0;
    int autorizado = 0;

    while (tentativas < 3 && !autorizado) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa == senha) {
            autorizado = 1;
        } else {
            printf("Senha incorreta. Tentativas restantes: %d\n\n", 3 - tentativas);
        }
    }

    if (autorizado) {
        printf("Acesso autorizado\n");
    } else {
        printf("Usuário bloqueado\n");
    }

    return 0;

}
