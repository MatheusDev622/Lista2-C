#include <stdio.h>

int main(){
    int dia;
    printf("Digite um número de 1 a 7:\n");
    scanf("%d", &dia);
    while(1){
        if( dia >= 0 && dia <= 7){
    switch (dia) {
        case 1: 
        puts("1 equivale a segunda");
        break;
        case 2:
        puts("2 equivale a terça");
        break;
        case 3:
        puts("3 equivale a quarta");
        break;
        case 4:
        puts("4 equivale a quinta");
        break;
        case 5:
        puts("5 equivale a sexta");
        break;
        case 6:
        puts("6 equivale a sabado");
        break;
        case 7:
        puts("7 equivale a domingo");
        break;
    }
    }
      else{ 
        printf("número de dia inválido\n");    
          
      }
      
    printf("Digite o número do dia da semana:\n");
    scanf("%d",&dia);
    if(dia == 0){
        break;
    }
    }
    
    return 0;
}