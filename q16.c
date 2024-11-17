#include <stdio.h>

int main(){
    for(int i = 0; i <= 200;i++){
        if(i <= 100 && i % 3 == 0){
            printf("multiplos de 3 entre 0 e 100: %d\n",i);
        }
        if( i>=100 &&i%5 == 0){
            printf("multiplos de 5 entre 100 e 200: %d\n",i);
        }
    }
}