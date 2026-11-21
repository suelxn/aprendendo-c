// Armazene em uma matriz as três notas de cinco alunos. Calcule e exiba a média de cada aluno e sua situação (Aprovado para média >= 7 e Reprovado caso contrário). Ao final, informe a maior nota registrada na turma. Conceitos envolvidos: Matrizes, loops aninhados, acumuladores, condicionais e ternário.
// Pular linha: \n

#include <stdio.h>

#define ALUNOS 5
#define NOTAS 3

int main (){

    float notas[ALUNOS][NOTAS], soma, media, maior;
    int i, j;

    for (i = 0; i < ALUNOS; i++) {
        for (j = 0; j < NOTAS; j++) {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    maior = notas[0][0];
    printf("\n");

    for (i = 0; i < ALUNOS; i++) {
        soma = 0;

        for (j = 0; j < NOTAS; j++) {
            soma += notas[i][j];

            if (notas[i][j] > maior) {
                maior = notas[i][j];
            }
        }

        media = soma / NOTAS;
        printf("Aluno %d - Média: %.2f - %s\n", i + 1, media, media >= 7 ? "Aprovado" : "Reprovado");
    }

    printf("\nMaior nota registrada na turma: %.2f\n", maior);

    return 0;

}
