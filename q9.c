#include <stdio.h>

int main(){
    int termo1 = 1, termo2 = 1, proximo_termo;
    printf("Sequência de Fibonacci até o 20° termo: ");
    printf("%d %d",termo1,termo2);
    
    for(int i = 3; i <= 20;i++){
        proximo_termo = termo1 + termo2;
        printf(", %d",proximo_termo);
        termo1 = termo2;
        termo2 = proximo_termo;
        
    }
    printf("\n");
    return 0; 
}
