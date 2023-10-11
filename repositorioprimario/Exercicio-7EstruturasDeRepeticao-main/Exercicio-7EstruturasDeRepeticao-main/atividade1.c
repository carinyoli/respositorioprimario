#include <stdio.h>

int main() {
    
    /*1. Faça um programa que leia um número inteiro positivo N
     e imprima todos os números naturais de 0 até N em ordem crescente. 
    */
    
    int N;

    
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);
   
    if (N < 0) {
        printf("O número digitado não é positivo.\n");
    } else {
        
        printf("Números naturais de 0 até %d em ordem crescente:\n", N);
        for (int i = 0; i <= N; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}