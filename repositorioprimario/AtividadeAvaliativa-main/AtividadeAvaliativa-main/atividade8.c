#include <stdio.h>

int main() {
    float salario, maior_salario = 0, soma_salario = 0, soma_numero_filhos = 0;
    int numero_filhos, total_pessoas = 0, total_salario_ate_100 = 0;
    do {
        printf("Digite o salário do habitante (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        
        if (salario >= 0) {

            printf("Digite o número de filhos do habitante: ");
            scanf("%d", &numero_filhos);

        
            soma_salario += salario;
            soma_numero_filhos += numero_filhos;
    
            if (salario > maior_salario) {
                maior_salario = salario;
            }

            if (salario <= 100) {
                total_salario_ate_100++;
            }

            total_pessoas++;
        }
    } while (salario >= 0);

 
    float media_salario = soma_salario / total_pessoas;
    float media_numero_filhos = soma_numero_filhos / total_pessoas;

    float percentual_salario_ate_100 = (float)total_salario_ate_100 / total_pessoas * 100;
    printf("Média do salário da população: %.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_numero_filhos);
    printf("Maior salário: %.2f\n", maior_salario);
    printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_salario_ate_100);

    return 0;
}
