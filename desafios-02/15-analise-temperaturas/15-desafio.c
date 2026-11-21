// Leia 10 temperaturas e armazene-as em um vetor. Calcule a média, apresente a maior e a menor temperatura e informe quantas ficaram acima da média. Conceitos envolvidos: Vetores, índices, loops, acumuladores e busca de maior/menor.
// Pular linha: \n

#include <stdio.h>

int main (){

    float temperaturas[10], soma = 0, media, maior, menor;
    int i, acima = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 10;
    maior = temperaturas[0];
    menor = temperaturas[0];

    for (i = 0; i < 10; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > media) {
            acima++;
        }
    }

    printf("\nMédia: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Temperaturas acima da média: %d\n", acima);

    return 0;

}
