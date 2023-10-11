#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int count = 0; // Contador para o segundo vetor

    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");

    for (int i = 0; i < 10; i++) {
        int numero;
        do {
            scanf("%d", &numero);
            if (numero < 0 || numero > 50) {
                printf("Digite um número no intervalo [0, 50]: ");
            }
        } while (numero < 0 || numero > 50);

        vetor1[i] = numero;

        if (numero % 2 == 1) {
            vetor2[count] = numero;
            count++;
        }
    }

    printf("Vetor 1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor 2 (ímpares de Vetor 1):\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
