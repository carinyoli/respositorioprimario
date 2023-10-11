#include<stdio.h>

    main(){
        /*
        8. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a
         idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
        
        */
        // variaveis 
        int anos, meses, dias, idadeDias;
        
        printf(" digite sua idade em anos, meses e dias \n ");

        scanf("%d %d %d ",&anos, &meses, &dias); 

        idadeDias = (anos * 365) + (meses * 30 ) + ( dias );
        printf(" dias vividos:  %d", idadeDias);


    }