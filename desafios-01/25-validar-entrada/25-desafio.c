// Solicite ao usuário uma nota entre 0 e 10. Enquanto for informado um valor inválido, solicite novamente. O programa somente deve continuar quando uma nota válida for digitada.
// Pular linha: \n

#include <stdio.h>

int main (){

    float nota;

    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Tente novamente.\n\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota válida: %.1f\n", nota);

    return 0;

}
