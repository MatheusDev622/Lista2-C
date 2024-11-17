#include <stdio.h>

int main(){
    int inter1,inter2,soma = 0,divisor = 0;
    printf("Digite um intervalo para ver sua media aritmedica:\n");
    scanf("%d",&inter1);
    scanf("%d",&inter2);

    if(inter1>inter2){
     for(int i = inter2; i<=inter1;i++){
        soma = soma + i;
        divisor += 1;
    }
     float media = (float)soma / (float)divisor;
     printf("A media do intervalo %d e %d é: %.2f",inter2,inter1,media);
 }else if(inter2>inter1){
    for(int i = inter1;i<=inter2;i++){
        soma = soma + i;
        divisor += 1;
    }
    float media = (float)soma / (float)divisor;
    printf("A media do intervalo %d e %d é: %.2f",inter1,inter2,media);
 }
    return 0;
}