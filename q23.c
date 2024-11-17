#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Pré-incremento:\n");
    printf("Valor de a antes do pré-incremento: %d\n", a);
    printf("Resultado do pré-incremento (++a): %d\n", ++a);  
    printf("Valor de a após o pré-incremento: %d\n", a);

    a = 5;

    printf("\nPós-incremento:\n");
    printf("Valor de b antes do pós-incremento: %d\n", b);
    printf("Resultado do pós-incremento (b++): %d\n", b++);  
    printf("Valor de b após o pós-incremento: %d\n", b);

    return 0;
}
