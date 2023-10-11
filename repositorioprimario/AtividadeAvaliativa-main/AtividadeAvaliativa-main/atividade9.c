#include <stdio.h>

int main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0,votos_nulos = 0, votos_em_branco = 0;
     

    do {
        printf("Digite o código do voto (1, 2, 3, 4, 5, 6 ou 0 para encerrar): ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_em_branco++;
                break;
            case 0:
                break;
            default:
                printf("Código de voto inválido.\n");
        }
    } while (voto != 0);

    printf("Total de votos para o candidato 1: %d\n", candidato1);
    printf("Total de votos para o candidato 2: %d\n", candidato2);
    printf("Total de votos para o candidato 3: %d\n", candidato3);
    printf("Total de votos para o candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    return 0;
}
