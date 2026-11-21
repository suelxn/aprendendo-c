// Organize uma calculadora em três arquivos: main.c, calculadora.c e calculadora.h. Implemente funções para soma, subtração, multiplicação e divisão. A main deve controlar o menu e chamar as funções apropriadas. Trate divisão por zero. Conceitos envolvidos: Modularização, funções com retorno, switch e organização de projeto.
// Pular linha: \n

/* Para testar o programa, usei o comando: 
cd /home/suelen/Documentos/Projetos/aprendendo-c/desafios-02/14-calculadora-modular
gcc main.c calculadora.c -o calculadora
./calculadora
*/

#include <stdio.h>
#include "calculadora.h"

int main (){

    int opcao = -1;
    int lidos, c;
    float numero1, numero2;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        lidos = scanf("%d", &opcao);

        if (lidos == EOF) {
            return 1;
        }

        if (lidos != 1) {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Opção inválida. Tente novamente.\n");
            opcao = -1;
            continue;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);
            printf("Digite o segundo número: ");
            scanf("%f", &numero2);
        }

        switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", somar(numero1, numero2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(numero1, numero2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(numero1, numero2));
            break;
        case 4:
            if (numero2 == 0) {
                printf("Erro: não é possível dividir por zero!\n");
            } else {
                printf("Resultado: %.2f\n", dividir(numero1, numero2));
            }
            break;
        case 0:
            printf("Encerrando a calculadora...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    } while (opcao != 0);

    return 0;

}
