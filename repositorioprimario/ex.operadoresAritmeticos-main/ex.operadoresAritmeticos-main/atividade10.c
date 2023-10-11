#include<stdio.h>

    main(){
        /*
        10. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor
        
        */
       float custoFabrica, distribuidor = 0.28 , imposto = 0,45, custoFinal;

       printf(" digite o custo de frbrica");
       scanf("%f", &custoFabrica);

       custoFinal = ( custoFabrica * distribuidor) + (custoFabrica * imposto) + custoFabrica; 
       printf("custo final do veiculo: R$%.2f ", custoFinal);
        
       
    }