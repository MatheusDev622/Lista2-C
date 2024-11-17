#include <stdio.h>

int main(){
    int num;
    printf("Digite um número para var sua tabuada: ");
    scanf("%d",&num);
    
    for(int i = 1; i<=10;i++){
        int produto = num*i;
        printf("%d x %d = %d\n",num,i,produto);
    }
    return 0;
}