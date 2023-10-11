#include<stdio.h>

main(){
                 
    /*
    3. Dadas as medidas de uma sala, informe sua área.
    */
   float largura, comprimento ,area; 
 
   // entrada de dados 
       printf("digite a largura ");
       scanf("%f",&largura);
        printf(" digite o comprimento");
        scanf("%f",&comprimento);
        // calcular a area 
        area = largura * comprimento;
         // apresentar a saida 
         printf(" a area da sala e : %fm2", area );
       
}