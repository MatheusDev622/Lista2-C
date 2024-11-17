#include <stdio.h>

int main() {
    float valor_mercadoria, entrada, prestacao;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);

    prestacao = (valor_mercadoria / 3);

    prestacao = (double) prestacao; 

    entrada = valor_mercadoria - (2 * prestacao);

    printf("Entrada: R$ %.2f\n", entrada);
    printf("Prestações: R$ %lf (2x)\n", prestacao);

    return 0;
}