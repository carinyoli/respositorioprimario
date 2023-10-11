#include <stdio.h>
#include <math.h>

int main() {
    int n = 10;
    double v[n];
    double media = 0.0;
    double soma_quadrados = 0.0;

    // Leitura dos valores do vetor
    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
        media += v[i];
    }

    // Cálculo da média
    media /= n;

    // Cálculo da soma dos quadrados das diferenças
    for (int i = 0; i < n; i++) {
        soma_quadrados += pow(v[i] - media, 2);
    }

    // Cálculo do desvio padrão
    double desvio_padrao = sqrt(soma_quadrados / (n - 1));

    printf("Média: %.2lf\n", media);
    printf("Desvio Padrão: %.2lf\n", desvio_padrao);

    return 0;
}
