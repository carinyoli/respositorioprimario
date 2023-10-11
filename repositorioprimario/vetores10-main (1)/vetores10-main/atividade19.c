#include <stdio.h>

int main() {
    int vetor[50];
    
    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }
    
    // Imprimindo o vetor na tela
    printf("Vetor preenchido com os valores (i+5*i) %% (i+1):\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
