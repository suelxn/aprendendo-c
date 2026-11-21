// Crie um menu para calcular raiz quadrada, potência ao quadrado e arredondamentos. Separe cada operação em uma função e utilize recursos de math.h. O menu deve permanecer ativo até a opção de saída. Conceitos envolvidos: Funções, parâmetros, retorno, math.h, switch e loops.
// Pular linha: \n

#include <stdio.h>
#include <math.h>

double raiz_quadrada (double numero){
    return sqrt(numero);
}

double potencia_quadrado (double numero){
    return pow(numero, 2);
}

void exibir_arredondamentos (double numero){
    printf("Arredondado (round): %.0f\n", round(numero));
    printf("Piso (floor): %.0f\n", floor(numero));
    printf("Teto (ceil): %.0f\n", ceil(numero));
}

int main (){

    int opcao;
    double numero;

    do {
        printf("\n1 - Raiz quadrada\n");
        printf("2 - Potência ao quadrado\n");
        printf("3 - Arredondamentos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Digite o número: ");
            scanf("%lf", &numero);
            if (numero < 0) {
                printf("Não existe raiz quadrada real de número negativo.\n");
            } else {
                printf("Raiz quadrada: %.2f\n", raiz_quadrada(numero));
            }
            break;
        case 2:
            printf("Digite o número: ");
            scanf("%lf", &numero);
            printf("Quadrado: %.2f\n", potencia_quadrado(numero));
            break;
        case 3:
            printf("Digite o número: ");
            scanf("%lf", &numero);
            exibir_arredondamentos(numero);
            break;
        case 0:
            printf("Encerrando...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    } while (opcao != 0);

    return 0;

}
