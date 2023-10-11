#include <stdio.h>

int main() {
    /*
2. Faça um programa que leia um número inteiro positivo N
 e imprima todos os números naturais de 0 até N em ordem decrescente. 
    */
    int N;

    // Solicita o número inteiro positivo N
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    // Verifica se N é um número inteiro positivo
    if (N < 0) {
        printf("O número digitado não é positivo.\n");
    } else {
        // Imprime os números naturais de 0 até N em ordem decrescente
        printf("Números naturais de %d até 0 em ordem decrescente:\n", N);
        for (int i = N; i >= 0; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}