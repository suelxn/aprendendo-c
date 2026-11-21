// Leia uma quantidade de armazenamento em gigabytes (GB) e apresente o valor aproximado em megabytes (MB) e kilobytes (KB), utilizando 1 GB = 1024 MB e 1 MB = 1024 KB. Conceitos envolvidos: Variáveis, operadores e conversão de unidades.
// Pular linha: \n

#include <stdio.h>

int main (){

    float gb, mb, kb;

    printf("Digite a quantidade de armazenamento em GB: ");
    scanf("%f", &gb);

    mb = gb * 1024;
    kb = mb * 1024;

    printf("\n%.2f GB equivalem a aproximadamente %.2f MB\n", gb, mb);
    printf("%.2f GB equivalem a aproximadamente %.2f KB\n", gb, kb);

    return 0;

}
