// Comentário

#include <stdio.h>

int main (){

    int vetor [10];

    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: \n",  i+1);
        scanf("%d", &vetor[i]);
    }

    return 0;

}