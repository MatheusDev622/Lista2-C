#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int primeiro = 1;  

    printf("Digite números inteiros (digite um número negativo e par para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0 && numero % 2 == 0) {
            break;
        }

        if (primeiro) {
            maior = menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (!primeiro) {
        printf("Produto do maior (%d) pelo menor (%d): %d\n", maior, menor, maior * menor);
    } else {
        printf("Nenhum número válido foi inserido.\n");
    }

    return 0;
}
