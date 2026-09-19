// Conversor de temperatura - Leia uma temperatura em Celsius e converta em Fahrenheit

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float temperatura;
    printf("Qual é a temperatura atual em Celsius? ");
    scanf("%f", &temperatura);
    temperatura = (temperatura * 1.8) + 32;
    printf("A temperatura em Fahrenheit é: %.1f\n", temperatura);
    return 0;
}
