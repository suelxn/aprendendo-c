// Calculadora - Leia dois números e uma operação (+, -, * ou /) e apresente o resultado. Trate adequadamente a tentativa de divisão por zero.

#include <stdio.h>
#include <math.h>

int main (){
    int opcao;
    float numero1, numero2, resultado;

    do {
        printf("Bem vindo a Calculadora!\n");
        printf("Para fazer uma operação, primeiro escolha o operador desejado:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("Qual opção deseja utilizar? \n");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("\nEssa opção é inválida. Tente novamente.\n\n");
        }

    } while (opcao < 1 || opcao > 4);

        printf("\nDigite o primeiro número: \n");
        scanf("%f", &numero1);
        printf("\nDigite o segundo número:\n");
        scanf("%f", &numero2);

        switch (opcao)
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