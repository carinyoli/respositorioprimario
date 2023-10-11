#include <stdio.h>
/*Criar um algoritmo que informe a quantidade total de calorias de uma refeição a 
partir do usuário que deverá informar o prato,
 a sobremesa e a bebida (veja a tabela a seguir). 
*/
enum Prato {
    VEGETARIANO = 1,
    PEIXE,
    FRANGO,
    CARNE
};

enum Sobremesa {
    ABACAXI = 1,
    SORVETE_DIET,
    MOUSE_DIET,
    MOUSE_CHOCOLATE
};

enum Bebida {
    CHA = 1,
    SUCO_LARANJA,
    SUCO_MELAO,
    REFRIGERANTE_DIET
};

int main() {
    int escolha_prato, escolha_sobremesa, escolha_bebida;
    float calorias_total = 0;

   
    printf("Escolha o prato (1-4): ");
    scanf("%d", &escolha_prato);

    printf("Escolha a sobremesa (1-4): ");
    scanf("%d", &escolha_sobremesa);

    printf("Escolha a bebida (1-4): ");
    scanf("%d", &escolha_bebida);

    
    switch (escolha_prato) {
        case VEGETARIANO:
            calorias_total += 180.0;
            break;
        case PEIXE:
            calorias_total += 230.0;
            break;
        case FRANGO:
            calorias_total += 250.0;
            break;
        case CARNE:
            calorias_total += 350.0;
            break;
        default:
            printf("Escolha de prato inválida.\n");
            return 1; 
    }

    switch (escolha_sobremesa) {
        case ABACAXI:
            calorias_total += 75.0;
            break;
        case SORVETE_DIET:
            calorias_total += 110.0;
            break;
        case MOUSE_DIET:
            calorias_total += 170.0;
            break;
        case MOUSE_CHOCOLATE:
            calorias_total += 200.0;
            break;
        default:
            printf("Escolha de sobremesa inválida.\n");
            return 1;
    }

    switch (escolha_bebida) {
        case CHA:
            calorias_total += 20.0;
            break;
        case SUCO_LARANJA:
            calorias_total += 70.0;
            break;
        case SUCO_MELAO:
            calorias_total += 100.0;
            break;
        case REFRIGERANTE_DIET:
            calorias_total += 65.0;
            break;
        default:
            printf("Escolha de bebida inválida.\n");
            return 1; 
    }

    
    printf("Total de calorias da refeição: %.2f cal\n", calorias_total);

    return 0;
}