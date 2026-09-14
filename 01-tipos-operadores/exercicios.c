#include <stdio.h>

int main() {
    // Exercicio 1: declarar variaveis de tipos diferentes e imprimir
    int idade = 25;
    float altura = 1.70;
    char inicial = 'S';
    printf("Idade: %d, Altura: %.2f, Inicial: %c\n", idade, altura, inicial);

    // Exercicio 2: operadores aritmeticos
    int a = 10, b = 3;
    printf("Soma: %d\n", a + b);
    printf("Divisao: %d\n", a / b);   // divisao inteira
    printf("Resto: %d\n", a % b);     // modulo

    // Exercicio 3: operadores relacionais e logicos
    int x = 7, y = 4;
    printf("x > y? %d\n", x > y);           // 1 = verdadeiro
    printf("x > 5 && y < 5? %d\n", x > 5 && y < 5);

    // Exercicio 4: variavel sem valor inicial, informada pelo usuario
    int peso; // declarada sem valor, sera preenchida pelo usuario
    printf("Digite seu peso em kg: ");
    scanf("%d", &peso);
    printf("Seu peso e: %d kg\n", peso);

    return 0;
}
