#include <stdio.h>
int main(){
    int anos = 0;
    int alturaj = 150;
    int alturap = 110;

    while(alturap != alturaj){
        alturaj += 2 ;
        alturap += 3; 
        anos += 1;
        if(alturap == alturaj){
            break;
        }
    }
    
    printf("pedro ficou com a mesma altura de jose em %d anos.\nambos tem %d centimetros de altura",anos,alturap);
    return 0;
}