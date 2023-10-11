#include <stdio.h>

int main() {
    double vetor1[5];
    double vetor2[5];
    double produto_escalar = 0.0;

    // Leitura dos elementos do primeiro vetor
    printf("Digite os 5 elementos do primeiro conjunto:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetor1[i]);
    }

    // Leitura dos elementos do segundo vetor
    printf("Digite os 5 elementos do segundo conjunto:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetor2[i]);
    }

    // Cálculo do produto escalar
    for (int i = 0; i < 5; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    // Exibição dos elementos dos conjuntos
    printf("Primeiro conjunto: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo conjunto: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor2[i]);
    }
    printf("\n");

    // Exibição do produto escalar
    printf("Produto escalar: %.2lf\n", produto_escalar);

    return 0;
}
