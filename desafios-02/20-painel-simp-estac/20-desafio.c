// Construa um programa que represente um estacionamento com 3 setores e 5 vagas por setor usando uma matriz. O sistema deve possuir menu para: exibir vagas, ocupar vaga, liberar vaga, contar vagas livres e sair. Separe operações importantes em funções. Valide setor e vaga informados e impeça operações inconsistentes, como ocupar uma vaga já ocupada. Conceitos envolvidos: Integração de tipos, operadores, condicionais, ternário quando apropriado switch, loops, funções, vetores/matrizes e organização do código.
// Pular linha: \n

#include <stdio.h>

#define SETORES 3
#define VAGAS 5

void exibir_vagas (int estacionamento[SETORES][VAGAS]);
int ocupar_vaga (int estacionamento[SETORES][VAGAS], int setor, int vaga);
int liberar_vaga (int estacionamento[SETORES][VAGAS], int setor, int vaga);
int contar_vagas_livres (int estacionamento[SETORES][VAGAS]);

int main (){

    int estacionamento[SETORES][VAGAS] = {0};
    int opcao, setor, vaga;

    do {
        printf("\n1 - Exibir vagas\n");
        printf("2 - Ocupar vaga\n");
        printf("3 - Liberar vaga\n");
        printf("4 - Contar vagas livres\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            exibir_vagas(estacionamento);
            break;
        case 2:
            printf("Digite o setor (1 a %d): ", SETORES);
            scanf("%d", &setor);
            printf("Digite a vaga (1 a %d): ", VAGAS);
            scanf("%d", &vaga);

            if (setor < 1 || setor > SETORES || vaga < 1 || vaga > VAGAS) {
                printf("Setor ou vaga inválidos.\n");
            } else if (ocupar_vaga(estacionamento, setor - 1, vaga - 1)) {
                printf("Vaga ocupada com sucesso.\n");
            } else {
                printf("Essa vaga já está ocupada.\n");
            }
            break;
        case 3:
            printf("Digite o setor (1 a %d): ", SETORES);
            scanf("%d", &setor);
            printf("Digite a vaga (1 a %d): ", VAGAS);
            scanf("%d", &vaga);

            if (setor < 1 || setor > SETORES || vaga < 1 || vaga > VAGAS) {
                printf("Setor ou vaga inválidos.\n");
            } else if (liberar_vaga(estacionamento, setor - 1, vaga - 1)) {
                printf("Vaga liberada com sucesso.\n");
            } else {
                printf("Essa vaga já está livre.\n");
            }
            break;
        case 4:
            printf("Vagas livres: %d\n", contar_vagas_livres(estacionamento));
            break;
        case 0:
            printf("Encerrando o sistema...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    } while (opcao != 0);

    return 0;

}

void exibir_vagas (int estacionamento[SETORES][VAGAS]){
    int i, j;

    printf("\nLegenda: L = livre, X = ocupada\n");
    for (i = 0; i < SETORES; i++) {
        printf("Setor %d: ", i + 1);
        for (j = 0; j < VAGAS; j++) {
            printf("%c ", estacionamento[i][j] ? 'X' : 'L');
        }
        printf("\n");
    }
}

int ocupar_vaga (int estacionamento[SETORES][VAGAS], int setor, int vaga){
    if (estacionamento[setor][vaga] == 1) {
        return 0;
    }

    estacionamento[setor][vaga] = 1;
    return 1;
}

int liberar_vaga (int estacionamento[SETORES][VAGAS], int setor, int vaga){
    if (estacionamento[setor][vaga] == 0) {
        return 0;
    }

    estacionamento[setor][vaga] = 0;
    return 1;
}

int contar_vagas_livres (int estacionamento[SETORES][VAGAS]){
    int i, j, livres = 0;

    for (i = 0; i < SETORES; i++) {
        for (j = 0; j < VAGAS; j++) {
            if (estacionamento[i][j] == 0) {
                livres++;
            }
        }
    }

    return livres;
}
