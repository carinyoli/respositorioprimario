#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; // Inicializa o primeiro número natural

    for (int i = 0; i < 100; ) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    printf("Vetor preenchido com os 100 primeiros naturais que não são múltiplos de 7 ou que não terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n"); // Quebra de linha a cada 10 elementos
        }
    }

    return 0;
}
