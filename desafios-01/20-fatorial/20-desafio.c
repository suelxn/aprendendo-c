// Leia um número inteiro não negativo e calcule seu fatorial
// Pular linha: \n

#include <stdio.h>

int main (){

    int n, fatorial = 1;
    printf("Digite um número inteiro não negativo: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }
    printf("O fatorial de %d é: %d\n", n, fatorial);

    return 0;

}