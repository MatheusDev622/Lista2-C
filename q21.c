#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%d", &numero);
    
    if (numero < 10000 || numero > 99999) {
        printf("Por favor, digite um número de 5 dígitos!\n");
        return 1; 
    }

    int digito1 = numero / 10000;               
    int digito2 = (numero / 1000) % 10;                 
    int digito4 = (numero / 10) % 10;            
    int digito5 = numero % 10;                   
    if (digito1 == digito5 && digito2 == digito4) {
        printf("O número %d é um palíndromo!\n", numero);
    } else {
        printf("O número %d não é um palíndromo.\n", numero);
    }

    return 0;
}