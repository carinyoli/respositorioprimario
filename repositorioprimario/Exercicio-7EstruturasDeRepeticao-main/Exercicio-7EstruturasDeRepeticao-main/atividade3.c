#include <stdio.h>

int main() {
    /*3. Faça um programa que leia um número inteiro N e depois 
    imprima os N primeiros números naturais ímpares (sem usar comando condicional). 
    */
    int N;

  
    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

   
    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    }

  
    printf("%d primeiros números naturais ímpares:\n", N);
    for (int i = 1; N > 0; i += 2) {
        printf("%d ", i);
        N--;
    }
    printf("\n");

    return 0;
}