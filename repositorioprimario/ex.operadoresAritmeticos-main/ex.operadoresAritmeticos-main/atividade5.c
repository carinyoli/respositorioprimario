#include<stdio.h>

    main(){
        /*
        5. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
        */
        
        //variaveis 
        float reais, cotacaodolar, valordolar;
        
        printf(" digite o valor em reais");
        scanf ("%f", &reais);

        printf(" digite a cotacao do dolar");
        scanf ("%f", &cotacaodolar);

        valordolar = reais / cotacaodolar; 
            
            printf(" o valor em dolar e: %f.2", valordolar);
    }