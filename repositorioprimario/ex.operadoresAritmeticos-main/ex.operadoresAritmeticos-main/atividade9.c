#include<stdio.h>

    main(){
        /*
        9. Escreva um algoritmo para ler o salário mensal atual de um 
        funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
        
        
        */
        float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

        printf(" digite o salario atual");
        scanf("%lf", &salarioAtual);

         printf(" digite a porcentagem de reajuste ");
        scanf("%lf", &porcentagemReajuste);

        reajusteFinal = porcentagemReajuste/100;
        
        // calcular o novo salario 
        novoSalario = ( salarioAtual * reajusteFinal) + salarioAtual; 
         printf(" novo salario:v R$%.2f",novoSalario);

    }