#include <stdio.h>

int main() {
    int v[10];
    int v1[10]; // Vetor para valores ímpares
    int v2[10]; // Vetor para valores pares
    int contador_v1 = 0;
    int contador_v2 = 0;

    // Leitura dos números inteiros e armazenamento no vetor v
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Separando os valores em v1 e v2
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[contador_v2] = v[i];
            contador_v2++;
        } else {
            v1[contador_v1] = v[i];
            contador_v1++;
        }
    }

    // Imprimindo os elementos utilizados de v1
    printf("Elementos utilizados de v1 (valores ímpares):\n");
    for (int i = 0; i < contador_v1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Imprimindo os elementos utilizados de v2
    printf("Elementos utilizados de v2 (valores pares):\n");
    for (int i = 0; i < contador_v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
