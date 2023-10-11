#include <stdio.h>
#include <math.h>

int main() {
/*Calcule as raízes da equação de 2º grau.
*/
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a diferente de zero: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return 0;
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);


    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existe raiz real.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}