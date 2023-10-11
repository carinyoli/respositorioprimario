#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int resultado[20]; // O vetor resultante terá 20 posições

    // Leitura dos elementos do primeiro vetor
    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos elementos do segundo vetor
    printf("Digite os 10 elementos do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Preenchimento do vetor resultante
    for (int i = 0, j = 0; i < 10; i++) {
        resultado[j++] = vetor1[i]; // Posição par
        resultado[j++] = vetor2[i]; // Posição ímpar
    }

    // Exibição do vetor resultante
    printf("Vetor resultante (posições pares com valores do primeiro vetor, posições ímpares com valores do segundo vetor):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
