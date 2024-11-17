#include <stdio.h>

int main() {
    int i;

    for (i = 15; i <= 90; i++) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }
    printf("Esses são os multiplos de 4 entre 15 e 90");

    return 0;
}
