#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    
    printf("Digite o número de termos para aproximar pi: ");
    scanf("%d", &n);

    printf("\nTabela de aproximação de pi:\n");
    printf("Termos\t\tAproximação de pi\n");
    printf("-------------------------------\n");
    
    for (int i = 1; i <= n; i++) {
        double termo = ((i % 2 == 1) ? 1 : -1) * (4.0 / (2 * i - 1));
        pi += termo;
        printf("%d\t\t%.15f\n", i, pi);
    }

    return 0;
}
