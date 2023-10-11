#include <stdio.h>

int main() {
    /*6. Elabore um algoritmo que permita ao usuário realizar a 
    compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo,
     com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu
      frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente
       o valor total da compra.  1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade 
    */
    int opcao,quantidadeAbacaxi,quantidadeMaca, quantidadePera;
    float totalCompra = 0.0;

    printf("Bem-vindo à loja de frutas!\n");

    do {
        printf("\nMenu de Frutas:\n");
        printf("1. Abacaxi - R$5.00 a unidade\n");
        printf("2. Maçã - R$1.00 a unidade\n");
        printf("3. Pera - R$4.00 a unidade\n");
        printf("4. Encerrar compra\n");
        printf("Escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantos abacaxis você deseja comprar? ");
        
                scanf("%d", &quantidadeAbacaxi);
                totalCompra += quantidadeAbacaxi * 5.0;
                break;
            case 2:
                printf("Quantas maçãs você deseja comprar? ");
                scanf("%d", &quantidadeMaca);
                totalCompra += quantidadeMaca * 1.0;
                break;
            case 3:
                printf("Quantas peras você deseja comprar? ");
                scanf("%d", &quantidadePera);
                totalCompra += quantidadePera * 4.0;
                break;
            case 4:
                printf("Compra finalizada. O total da compra é: R$%.2f\n", totalCompra);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    printf("Obrigado por comprar conosco!\n");

    return 0;
}