// Faixa etária - Leia a idade de uma pessoa e classifique-a em criança, adolescente, adulto ou idoso. Defina no programa os intervalos utilizados para cada classificação.

#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("Idade inválida.\n");
    } else if (idade <= 13)
    {
        printf("Você é uma criança.\n");
    } else if (14 <= idade && idade <= 17)
    {
        printf("Você é um adolescente.\n");
    } else if (18 <= idade && idade <= 64)
    {
        printf("Você é um adulto.\n");
    } else {
        printf("Você é um idoso.\n");
    }

    
    
    
    
}