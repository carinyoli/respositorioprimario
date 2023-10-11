#include<stdio.h>

    main(){

    /*
    11. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
    mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
     Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas,
    o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
    */

        float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, porcentagemVendas=0.05;

        printf("digite quantos carros vendeu, ");
        scanf("%f", &numCarros);

        printf("digite total de vendas , ");
        scanf("%f", &totalVendas);

        printf("digite o salario fixo ");
        scanf("%f", &salarioFixo);

        printf("comissao por carro vendido");
        scanf("%f", &valorPorCarro);

        salarioFinal = (valorPorCarro * numCarros) + (totalVendas * porcentagemVendas)+ salarioFixo;

    }
