#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade,totalHabitantes = 0,totalMulheresCastanhas = 0;
    float salario;
    

    printf("Pesquisa sobre características físicas da população\n");
    printf("Para encerrar a pesquisa, digite uma idade igual a -1.\n");

    while (1) {
        printf("Habitante %d:\n", totalHabitantes + 1);

        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);
        if (sexo != 'm' && sexo != 'f') {
            printf("Opção de sexo inválida. Use 'm' para masculino ou 'f' para feminino.\n");
            continue;
        }

       
        printf("Cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);
        if (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p') {
            printf("Opção de cor dos olhos inválida. Use 'a', 'v', 'c' ou 'p'.\n");
            continue;
        }

        printf("Cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);
        if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
            printf("Opção de cor dos cabelos inválida. Use 'l', 'c', 'p' ou 'r'.\n");
            continue;
        }

        printf("Idade (10-100): ");
        scanf("%d", &idade);
        if (idade == -1) {
            break; 
        }
        if (idade < 10 || idade > 100) {
            printf("Idade fora do intervalo válido (10-100 anos).\n");
            continue;
        }

        printf("Salário (>= 0): ");
        scanf("%f", &salario);
        if (salario < 0) {
            printf("Salário não pode ser negativo.\n");
            continue;
        }

        
        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            totalMulheresCastanhas++;
        }

        totalHabitantes++;
    }

    if (totalHabitantes == 0) {
        printf("Nenhum habitante registrado.\n");
    } else {
        float percentualMulheresCastanhas = (float)totalMulheresCastanhas / totalHabitantes * 100;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", percentualMulheresCastanhas);
    }

    return 0;
}