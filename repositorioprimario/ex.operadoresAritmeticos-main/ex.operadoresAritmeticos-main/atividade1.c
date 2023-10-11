#include<stdio.h>

main(){

       /*
        1.Escreva um programa que receba dois números e mostre a soma,
        a subtração, a multiplicação e a divisão desses números.
       */     

      // declaraçao das variaveis      
       int num1, num2, soma, mult;
       float sub, div;
       
       // entrada de dados 
       printf("digite o primeiro numero");
       scanf("%d",&num1);
        printf(" digite o segundo numero");
        scanf("%d",&num2);
       
        // operações
        soma =num1 + num2;
        mult = num1 * num2;
        sub = (float)num1 - num2;
        div = (float)num1 / num2;

        // apresentaçao dos resultados 
        printf(" soma: %d ",soma) ;
         printf(" multiplicacao : %d ", mult) ;
          printf(" subtracao: %f",sub) ;
           printf(" divisao: %f ", div) ;
        
}