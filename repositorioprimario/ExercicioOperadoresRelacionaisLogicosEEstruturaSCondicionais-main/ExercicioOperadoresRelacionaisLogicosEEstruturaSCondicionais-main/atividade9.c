#include <stdio.h>

int main() {

    /*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa,
     cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
    */
    float salarioAtual, salarioReajustado;
    int tempoDeServico;

    
    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salarioAtual);
    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempoDeServico);

 
    if (salarioAtual <= 500.0 && tempoDeServico < 1) {
        salarioReajustado = salarioAtual * 1.25; 
    } else if (salarioAtual <= 1000.0 && tempoDeServico >= 1 && tempoDeServico <= 3) {
        salarioReajustado = salario_Atual * 1.20 + 100.0; 
    } else if (salarioAtual <= 1500.0 && tempoDeServico >= 4 && tempo_DeServico <= 6) {
        salarioReajustado = salarioAtual * 1.15 + 200.0; 
    } else if (salarioAtual <= 2000.0 && tempoDeServico >= 7 && tempoDeServico <= 10) {
        salarioReajustado = salarioAtual * 1.10 + 300.0; 
    } else if (salarioAtual > 2000.0 && tempoDeServico > 10) {
        salarioReajustado = salarioAtual + 500.0; 
    } else {
        salario_reajustado = salarioAtual; 
    }

    printf("O salário reajustado do funcionário é: R$ %.2f\n", salarioReajustado);

    return 0;
}