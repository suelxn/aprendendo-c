// Menu de operações - Crie um menu utilizando switch que permita escolher entre somar, subtrair, multiplicar e dividir dois números.

#include <stdio.h>
#include <math.h>

int main (){

    int tipo_operacao;
    float numero1, numero2, resultado;
    

    printf("Bem vindo à calculadora! Digite o primeiro número e o segundo número, e depois selecione a operação que deseja realizar. \n");
    printf("Insira o primeiro número: \n");
    scanf("%f", &numero1);
    printf("Insira o segundo número: \n");
    scanf("%f", &numero2);

    printf("Agora, insira o número correspondente ao tipo de operação que deseja realizar: \n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Qual será a operação?\n");
    scanf("%d", &tipo_operacao);

    switch (tipo_operacao)
        {
        case 1:
            resultado = numero1 + numero2;
            printf("\nO resultado é %1f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("\nO resultado é %1f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("\nO resultado é %1f\n", resultado);
            break;
        case 4:
            if (numero2 != 0)
            {
                resultado = numero1 / numero2;
                printf("\nO resultado é %1f\n", resultado);
            } else {
                printf("\nErro: Não é possível dividir por zero!\n");
            }
            break;
        }
    return 0;

}