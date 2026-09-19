// Média de tres notas - Leia três notas, calcule a média e informe se o aluno foi aprovado ou reprovado.

#include <stdio.h>
#include <math.h>

int main() {
    float notaA;
    float notaB;
    float notaC;
    float media;
    printf("Informe sua primeira nota: ");
    scanf("%f", &notaA);
    printf("Informe sua segunda nota: ");
    scanf("%f", &notaB);
    printf("Informe sua terceira nota: ");
    scanf("%f", &notaC);

    media = (notaA + notaB + notaC) / 3;

    if (media >= 7) {
    printf("Parabéns! Você foi aprovado. Sua média é: %.1f\n", media);
    }
    else {
        printf("Infelizmente, você foi reprovado. Sua média é: %.1f\n", media);
    }

    return 0;

}