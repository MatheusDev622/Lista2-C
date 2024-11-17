#include <stdio.h>

int main() {
    int a,b, soma = 0;
    printf("Digite o intervalo desejado: ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a > b){
    for (int i = b; i <= a; i++){
        if(i%2 == 0){
            soma = soma + i;
        }
    }
    printf("Essse é o somatorio dos números no intervalo %d e %d:\n%d ",b,a,soma);
  }else if(b > a){
    for(int i = a; i <= b;i++){
        if(i%2 == 0){
            soma = soma + i;
        }
    }
    printf("Essse é o somatorio dos números no intervalo %d e %d:\n%d ",a,b,soma);
  }
  return 0;
}