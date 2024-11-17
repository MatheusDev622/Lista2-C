#include <stdio.h>

int main()
{
    int n,maior,menor;
    printf("Digite um número inteiro aleátorio:\n");
    scanf("%d",&n);
    maior = menor = n;
    while(1){
        printf("Digite um número inteiro aleátorio:\n");
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        
        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }
        
    }
    
    printf("O maior valor digitado é: %d\n",maior);
    printf("O menor valor digitado é: %d\n",menor);
    

    return 0;
}