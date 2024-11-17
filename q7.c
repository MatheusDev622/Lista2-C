#include <stdio.h>

int main() {
    float num1,num2;
    printf("Digite o valor do dividendo:\n");
    scanf("%f",&num1);
    printf("Digite o valor do divisor:\n");
    scanf("%f",&num2);
    
    if(num2 == 0 ){
        while(1){
            printf("O divisor não pode ser 0, tente novamente!\n");
            printf("Digite o valor do divisor:\n");
            scanf("%f",&num2);
            if(num2 != 0){
                break;
            }
        }
    }
    float divi = num1/num2;
    printf("O resultado da divisão é: %.2f",divi);
    return 0;
}