#include <stdio.h>

int main() {
    int numero, contador = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    while (numero > 0) {
        if (numero % 10 == 7) {
            contador++;  
        }
        numero /= 10;  
    }

    printf("O número possui %d algarismos 7\n",contador);

    return 0;
}
