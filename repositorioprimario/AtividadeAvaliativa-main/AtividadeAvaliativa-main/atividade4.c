#include <stdio.h>

int main() {
    float A, B, C,maior, menor, meio; 
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A > B && A > C) {
        maior = A;
        if (B > C) {
            meio = B;
            menor = C;
        } else {
            meio = C;
            menor = B;
        }
    } else if (B > A && B > C) {
        maior = B;
        if (A > C) {
            meio = A;
            menor = C;
        } else {
            meio = C;
            menor = A;
        }
    } else {
        maior = C;
        if (A > B) {
            meio = A;
            menor = B;
        } else {
            meio = B;
            menor = A;
        }
    }

    if (maior < menor + meio) {
        if (maior * maior == menor * menor + meio * meio) {
            printf("É um triângulo retângulo.\n");
        } else if (maior * maior > menor * menor + meio * meio) {
            printf("É um triângulo obtusângulo.\n");
        } else {
            printf("É um triângulo acutângulo.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}
