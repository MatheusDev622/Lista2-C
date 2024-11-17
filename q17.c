#include <stdio.h>

int main(){
    int fahrenheit;
    for(int celcius = 10;celcius<=100;celcius++){
        fahrenheit = 1.8*celcius + 32;
        if(celcius % 10 == 0)
            printf("%d celcius em fahrenheit é: %d\n",celcius,fahrenheit);
    }
}