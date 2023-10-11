#include <stdio.h>

int main() {
    /*7) Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino),
     a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir: 
    */
    char nome[50];
    char sexo;
    float altura, peso;
    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0.0, somaAlturaMulheres = 0.0, somaAlturaTotal = 0.0;
    float somaPesoHomens = 0.0, somaPesoMulheres = 0.0, somaPesoTotal = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("Informe os dados da pessoa %d:\n", i);

      
        printf("Nome: ");
        scanf("%s", nome);

       
        printf("Sexo (M/m para masculino, F/f para feminino): ");
        scanf(" %c", &sexo);

        
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        
        printf("Peso (em kg): ");
        scanf("%f", &peso);

       
        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        somaAlturaTotal += altura;
        somaPesoTotal += peso;
    }


    float mediaAlturaHomens = (numHomens > 0) ? (somaAlturaHomens / numHomens) : 0;
    float mediaAlturaMulheres = (numMulheres > 0) ? (somaAlturaMulheres / numMulheres) : 0;
    float mediaAlturaGrupo = (somaAlturaTotal / 10);
    float mediaPesoHomens = (numHomens > 0) ? (somaPesoHomens / numHomens) : 0;
    float mediaPesoMulheres = (numMulheres > 0) ? (somaPesoMulheres / numMulheres) : 0;
    float mediaPesoGrupo = (somaPesoTotal / 10);


    printf("\nEstatísticas do grupo:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f metros\n", mediaAlturaHomens);
    printf("Altura média das mulheres: %.2f metros\n", mediaAlturaMulheres);
    printf("Altura média do grupo: %.2f metros\n", mediaAlturaGrupo);
    printf("Peso médio dos homens: %.2f kg\n", mediaPesoHomens);
    printf("Peso médio das mulheres: %.2f kg\n", mediaPesoMulheres);
    printf("Peso médio do grupo: %.2f kg\n", mediaPesoGrupo);

    return 0;
}
