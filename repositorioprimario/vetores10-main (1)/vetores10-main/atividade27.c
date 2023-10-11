#include <stdio.h>
#include <math.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vetor[10];

    // Leitura dos números inteiros e armazenamento no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificação de primos e impressão das posições
    printf("Números primos e suas posições no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("Número primo: %d (Posição: %d)\n", vetor[i], i);
        }
    }

    return 0;
}
