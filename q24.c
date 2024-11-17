#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Triplas de Pitágoras (catetos e hipotenusa <= 500):\n");

    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {  
            c = (int)sqrt(a*a + b*b);  

            if (a*a + b*b == c*c && c <= 500) {
                printf("Cateto 1: %d, Cateto 2: %d, Hipotenusa: %d\n", a, b, c);
            }
        }
    }

    return 0;
}
