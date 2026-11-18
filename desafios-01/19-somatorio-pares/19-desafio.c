// Leia um número inteiro N e calcule a soma de todos os números pares entre 1 e N.

#include <stdio.h>

int main (){

    int N, soma = 0;
    printf("Digite um número inteiro: \n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;

}