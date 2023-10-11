#include <stdio.h>

int main() {
    int numero_aluno, numero_aluno_alto, numero_aluno_baixo;
    double altura, altura_alta = 0.0, altura_baixa = 100.0; // Inicialize a altura_baixa com um valor alto e a altura_alta com um valor baixo para garantir que todos os valores reais sejam menores ou iguais a altura_baixa e maiores ou iguais a altura_alta.

    for (int i = 1; i <= 10; i++) {
        printf("Digite o número do aluno %d: ", i);
        scanf("%d", &numero_aluno);

        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%lf", &altura);

        if (altura > altura_alta) {
            altura_alta = altura;
            numero_aluno_alto = numero_aluno;
        }

        if (altura < altura_baixa) {
            altura_baixa = altura;
            numero_aluno_baixo = numero_aluno;
        }
    }

    printf("Aluno mais alto:\nNúmero: %d\nAltura: %.2f metros\n", numero_aluno_alto, altura_alta);
    printf("Aluno mais baixo:\nNúmero: %d\nAltura: %.2f metros\n", numero_aluno_baixo, altura_baixa);

    return 0;
}
