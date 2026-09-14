#include <stdio.h>

int main() {
    // Exercicio 1: verificar se um numero e par ou impar
    int n = 7;
    if (n % 2 == 0) {
        printf("%d e par\n", n);
    } else {
        printf("%d e impar\n", n);
    }

    // Exercicio 2: classificar idade em faixas usando else if
    int idade = 15;
    if (idade < 12) {
        printf("Crianca\n");
    } else if (idade < 18) {
        printf("Adolescente\n");
    } else {
        printf("Adulto\n");
    }

    // Exercicio 3: usar switch para exibir o dia da semana
    int dia = 3;
    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda\n"); break;
        case 3: printf("Terca\n"); break;
        case 4: printf("Quarta\n"); break;
        case 5: printf("Quinta\n"); break;
        case 6: printf("Sexta\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Dia invalido\n");
    }

    return 0;
}
