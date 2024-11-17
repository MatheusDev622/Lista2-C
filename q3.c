#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,fatorial;
    printf("Digite um número para ver seu fatorial: ");
    scanf("%d",&num);
    for(fatorial = 1;num>1;num=num-1){
        fatorial = fatorial*abs(num);
    }
    printf("O fatorial do número digitado é %d",fatorial);
    return 0;
}