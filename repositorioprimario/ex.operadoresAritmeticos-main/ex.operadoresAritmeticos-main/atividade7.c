#include<stdio.h>
#include<math.h>
    main(){
         /*
         7. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 
         */
        // variaveis 
         
         double raio, area, PI = 3.1415;
         printf(" digite o valor do raio");
         scanf("%lf",& raio); 
          // calculo da area do circulo = PI * (raio * raio)
        
          area = PI  * ( pow( raio, 2));
          printf(" a area do circulo e %lf: ", area);
         
         
         
         
         
         
             }