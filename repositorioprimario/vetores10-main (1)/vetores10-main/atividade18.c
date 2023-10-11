#include <stdio.h>

int main() {
    int vetor[10];
    int x;
    
    // Lendo os 10 números do vetor
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Lendo o número x
    printf("Digite um número inteiro x: ");
    scanf("%d", &x);
    
    printf("Múltiplos de %d no vetor: ", x);
    
    int count = 0;  // Contador para os múltiplos
    
    // Verificando e mostrando os múltiplos de x no vetor
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }
    
    if (count == 0) {
        printf("Nenhum múltiplo de %d encontrado.", x);
    }
    
    printf("\n");
    
    return 0;
}
