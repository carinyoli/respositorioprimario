#include <stdio.h>

int main() {
    int A[10];
    int B[10];
    int C[10];

    // Leitura dos vetores A e B
    printf("Digite os 10 elementos do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 elementos do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    // Cálculo do vetor C = A - B
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    // Exibição dos elementos do vetor C
    printf("Vetor C (C = A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
