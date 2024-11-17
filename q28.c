#include <stdio.h>

int main() {
    unsigned char X, Y;

    // Entrada de X e Y
    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X);  // Lê um valor de 8 bits para X

    printf("Digite o valor de Y (maior ou igual a 5 e <= 8): ");
    scanf("%hhu", &Y);  // Lê um valor de 8 bits para Y

    // Verifica se Y é maior ou igual a 5
    if (Y < 5 || Y > 8) {
        printf("Valor de Y deve ser maior ou igual a 5 e menor ou igual a 8.\n");
        return 1;
    }

    // Mascarar os 4 bits antes e depois de Y em Y
    unsigned char mask = 0xF0;  // Mascara para limpar 4 bits à direita de Y
    mask >>= Y - 5;  // Ajusta a máscara para os bits de Y
    unsigned char clear_bits = Y & ~mask;  // Limpa bits de  Y
    printf("%hhu",clear_bits);

}