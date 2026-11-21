// Leia a quantidade de alunos de uma turma. Em seguida, leia a nota de cada aluno e apresente a média geral da turma.
// Pular linha: \n

#include <stdio.h>

int main (){

    int quantidade, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade de alunos deve ser maior que zero.\n");
    } else {
        for (i = 1; i <= quantidade; i++) {
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &nota);
            soma += nota;
        }

        media = soma / quantidade;
        printf("A média geral da turma é: %.1f\n", media);
    }

    return 0;

}
