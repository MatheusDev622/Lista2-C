#include <stdio.h>

int main() {
    unsigned long long soma = 0; 
    unsigned long long grao = 1;  

    for (int i = 1; i <= 64; i++) {
        soma += grao;  
        grao *= 2;     
    }

    printf("O número total de grãos de trigo no tabuleiro de xadrez é: %llu",soma);

    return 0;
}
