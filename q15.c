#include <stdio.h>
#include <math.h>  // Para usar a função pow()

int main() {
    int base = 3;
    int expoente;

    // Laço para calcular e exibir as potências de 3 para expoentes de 0 a 7
    for (expoente = 0; expoente <= 7; expoente++) {
        int resultado = pow(base, expoente);
        printf("3 elevado a %d é %d\n", expoente, resultado);
    }

    return 0;
}
