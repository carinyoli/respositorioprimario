#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    if (x * x - 16 != 0) {
        float resultado = (5 * x + 3) / sqrt(x * x - 16);
        printf("O valor de f(x) para x = %.2f é: %.2f\n", x, resultado);
    } else {
        printf("O valor de x resulta em uma divisão por zero. A função não está definida para esse valor.\n");
    }

    return 0;
}
