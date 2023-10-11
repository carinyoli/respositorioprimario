#include <stdio.h>
#include <math.h>

int main() {
    /*Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso
     ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
    */
    double numero;

  
    printf("Digite um número: ");
    scanf("%lf", &numero);
    if (numero >= 0) {
        double raiz_quadrada = sqrt(numero);
        printf("A raiz quadrada de %.2lf é %.2lf\n", numero, raiz_quadrada);
    } else {
        double quadrado = numero * numero;
        printf("O quadrado de %.2lf é %.2lf\n", numero, quadrado);
    }

    return 0;
}






