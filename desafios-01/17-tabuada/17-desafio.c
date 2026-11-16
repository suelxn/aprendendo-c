// Leia um número e apresente sua tabuada de multiplicação de 1 a 10.

#include <stdio.h>

int main (){

    int n;
    
    printf("Digite um número: \n");
    scanf("%d", &n);

    printf("\nResultado: %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;

}