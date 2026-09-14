#include <stdio.h>

int main() {
    // Exercicio 1: ler um numero inteiro e exibi-lo
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Voce digitou: %d\n", numero);

    // Exercicio 2: ler nome (string) e idade, exibir uma frase
    char nome[50];
    int idade;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("%s tem %d anos.\n", nome, idade);

    // Exercicio 3: ler dois numeros float e mostrar a soma formatada
    float n1, n2;
    printf("Digite dois numeros decimais: ");
    scanf("%f %f", &n1, &n2);
    printf("Soma: %.2f\n", n1 + n2);

    return 0;
}
