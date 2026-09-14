// Arquivo de anotações e testes rápidos: usado para rascunhos, experimentos
// e pequenos trechos de código pontuais durante os estudos de C.

#include <stdio.h>
int main() {
    int numero;
    int i;

    printf("Digite um número: ");
    fflush(stdout); // força a exibição do prompt antes de ler a entrada
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        
        printf("%d x %d = %d\n",
            numero,
            i,
            numero * i);
    }

    return 0;

}