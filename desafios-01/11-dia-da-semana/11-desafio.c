// Dia da semana - Escreva um programa que leia um número inteiro de 1 a 7 e mostre qual dia da semana esse número representa. Caso o valor esteja fora desse intervalo, informe que a opção é inválida. 

#include <stdio.h>

int main(){
    int dia;

    printf("Para descobrir que dia é hoje, selecione um número abaixo: \n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("Qual número você deseja selecionar?\n");
    scanf("%d", &dia);

    switch (dia) {
    case 1:
        printf("Hoje é domingo!\n");
        break;
    case 2:
        printf("Hoje é segunda-feira!\n");
        break;
        
    case 3:
        printf("Hoje é terça-feira!\n");
        break;

    case 4:
        printf("Hoje é quarta-feira!\n");
        break;

    case 5:
        printf("Hoje é quinta-feira!\n");
        break;

    case 6:
        printf("Hoje é sexta-feira!\n");
        break;

    case 7:
        printf("Hoje é sábado!\n");
        break;
    
    default:
        printf("\nEssa opção é inválida. Tente novamente.\n");
        break;
    }

    return 0;
}