#include <stdio.h>

int main() {
    int voto, voto_nulo = 0, voto_renata = 0, voto_paulo = 0;

    printf("Em qual candidato deseja votar?\n");
    printf("5 para Paulo\n7 para Renata\n0 para nulo\n");
    
    while (1) {
        printf("Digite seu voto: ");
        scanf("%d", &voto);

        if (voto < 0) {
            break; 
        }

        if (voto == 5) {
            voto_paulo += 1;
        } else if (voto == 7) {
            voto_renata += 1;
        } else if (voto == 0) {
            voto_nulo += 1;
        } else {
            printf("Voto inválido! Por favor, insira um voto válido.\n");
        }
    }

    int total_votos = voto_nulo + voto_paulo + voto_renata;

    if (total_votos == 0) {
        printf("Nenhum voto foi registrado.\n");
        return 0;
    }

    float porcen_paulo = (float)voto_paulo / total_votos * 100;
    float porcen_renata = (float)voto_renata / total_votos * 100;
    float porcen_nulo = (float)voto_nulo / total_votos * 100;

    // Exibindo o relatório
    printf("\nRelatório de Votação:\n");
    printf("Total de votos: %d\n", total_votos);
    printf("Votos para Paulo: %d (%.2f%%)\n", voto_paulo, porcen_paulo);
    printf("Votos para Renata: %d (%.2f%%)\n", voto_renata, porcen_renata);
    printf("Votos nulos: %d (%.2f%%)\n", voto_nulo, porcen_nulo);

    if (voto_paulo > voto_renata) {
        printf("\nPaulo é o ganhador da eleição com %.2f%% dos votos.\n", porcen_paulo);
    } else if (voto_renata > voto_paulo) {
        printf("\nRenata é a ganhadora da eleição com %.2f%% dos votos.\n", porcen_renata);
    } else {
        printf("\nHouve um empate entre Paulo e Renata.\n");
    }

    return 0;
}