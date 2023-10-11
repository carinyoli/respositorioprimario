#include<stdio.h>

    main(){
        /*
        6. Faça um programa em que o usuário digite o custo de uma determinada mercadoria,
         em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).
          Para concluir,  o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
        
        */
        // variaveis 

        float custo, frete, despesa, valorBruto , valorVenda, lucro;

        printf(" digite o custo do produto");
        scanf ("%f",&custo);

         printf(" digite o valor do frete ");
        scanf ("%f",&frete);

         printf(" digite o valor da despesa ");
        scanf ("%f",&despesa);

        // calcular o valor bruto do produto 
        // valor bruto= custo + frete + despesa 

        valorBruto =  custo + frete + despesa; 
         // informar o valor bruto para o  usuario 
          printf (" o valor bruto do produto e : R$%.2f. digite o valor da venda:  ", valorBruto);
           scanf("%f", &valorVenda);
 
  // calculo do lucro  
  lucro = ((valorVenda - valorBruto) *100) /valorBruto;
  // apresentacao do lucro
  printf (" sua porcentagem de lucro: R$%.2f", lucro); 



    }