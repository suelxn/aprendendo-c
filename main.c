// Arquivo de anotações e testes rápidos: usado para rascunhos, experimentos
// e pequenos trechos de código pontuais durante os estudos de C.

#include <stdio.h>
int main() {
    int dia;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido\n");
    }
    return 0;
}