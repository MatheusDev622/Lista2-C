#include <stdio.h>

int main() {
    int a,b;
    printf("Digite o intervalo desejado: ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a > b){
    for (int i = b; i <= a; i++) {
        if (i % 4 == 0) {
            printf("%d\n",i);
        }
    }
    printf("Esses são os multiplos de 4 no intervalo entre %d e %d ",b,a);
  }else if(b > a){
    for(int i = a; i <= b;i++){
        if(i % 4 == 0){
            printf("%d\n",i);
        }
    }
    printf("Esses são os multiplos de 4 no intervalo entre %d e %d",a,b);
  }
  return 0;
}