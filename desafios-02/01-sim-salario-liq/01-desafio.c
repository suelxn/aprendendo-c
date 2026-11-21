// Uma empresa deseja estimar o salário líquido de um colaborador. Leia o salário bruto e os valores de dois descontos (em percentual). Calcule e exiba o valor de cada desconto e o salário final. Considere apenas os cálculos informados no enunciado; não é necessário reproduzir regras tributárias reais. Conceitos envolvidos: Tipos numéricos, entrada e saída, operadores aritméticos e atribuição.
// Pular linha: \n

#include <stdio.h>

int main (){

    float salario_bruto, percentual1, percentual2;
    float desconto1, desconto2, salario_liquido;

    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salario_bruto);
    printf("Digite o percentual do primeiro desconto (%%): ");
    scanf("%f", &percentual1);
    printf("Digite o percentual do segundo desconto (%%): ");
    scanf("%f", &percentual2);

    desconto1 = salario_bruto * percentual1 / 100;
    desconto2 = salario_bruto * percentual2 / 100;
    salario_liquido = salario_bruto - desconto1 - desconto2;

    printf("\nValor do primeiro desconto: R$ %.2f\n", desconto1);
    printf("Valor do segundo desconto: R$ %.2f\n", desconto2);
    printf("Salário final: R$ %.2f\n", salario_liquido);

    return 0;

}
