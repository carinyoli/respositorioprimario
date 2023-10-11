#include <stdio.h>

int main() {
    int num_alunos = 30;
    float notas[num_alunos], media_geral = 0, n1, n2, n3;


    for (int i = 0; i < num_alunos; i++) {
        
        printf("Digite as três notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &n1, &n2, &n3);

        float media = (n1 * 2 + n2 * 4 + n3 * 4) / 10;
        media_geral += media;
        printf("Média do aluno %d: %.2f\n", i + 1, media);
        if (media >= 7) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }
    media_geral /= num_alunos;
    printf("Média geral da turma: %.2f\n", media_geral);

    return 0;
}
