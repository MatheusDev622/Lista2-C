#include <stdio.h>

int main() {
    printf("Decimal\t\tBinário\t\tOctal\t\tHexadecimal\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t\t", i);
        
        for (int j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
        }
        
        printf("\t\t%o", i);
        
        printf("\t\t%X\n", i);
    }

    return 0;
}
