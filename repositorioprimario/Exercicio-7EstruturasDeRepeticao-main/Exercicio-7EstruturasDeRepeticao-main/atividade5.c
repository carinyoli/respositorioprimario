#include <stdio.h>

int main() {
    /*5. Faça um programa que calcule e mostre a soma dos 50
     primeiros números pares. 
    */
    int soma = 0, contador = 0, numero = 2;  

    while (contador < 50) {
        soma += numero;  // Adiciona o número atual à soma
        numero += 2;  // Incrementa para o próximo número par
        contador++;  // Incrementa o contador
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}