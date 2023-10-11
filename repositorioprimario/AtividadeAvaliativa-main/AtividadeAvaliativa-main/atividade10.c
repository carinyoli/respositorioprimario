#include <stdio.h>
#include <string.h>

int main() {
    int num_cidades = 200;
    struct Cidade {
        int codigo;
        char estado[3];
        int veiculos;
        int acidentes;
    };

    struct Cidade cidades[200];
    int maior_indice_acidentes = -1, menor_indice_acidentes = -1;
    int cidade_maior_indice, cidade_menor_indice;
    int total_veiculos = 0, total_acidentes_RS = 0;
    int num_cidades_RS = 0;
    for (int i = 0; i < num_cidades; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &cidades[i].codigo);
        printf("Estado: ");
        scanf("%s", cidades[i].estado);
        printf("Número de veículos: ");
        scanf("%d", &cidades[i].veiculos);
        printf("Número de acidentes com vítimas: ");
        scanf("%d", &cidades[i].acidentes);

        total_veiculos += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, "RS") == 0) {
            total_acidentes_RS += cidades[i].acidentes;
            num_cidades_RS++;
        }
        if (maior_indice_acidentes == -1 || cidades[i].acidentes > cidades[cidade_maior_indice].acidentes) {
            maior_indice_acidentes = cidades[i].acidentes;
            cidade_maior_indice = i;
        }

        if (menor_indice_acidentes == -1 || cidades[i].acidentes < cidades[cidade_menor_indice].acidentes) {
            menor_indice_acidentes = cidades[i].acidentes;
            cidade_menor_indice = i;
        }
    }

    float media_veiculos = (float)total_veiculos / num_cidades;

    float media_acidentes_RS = (float)total_acidentes_RS / num_cidades_RS;

    printf("a) Maior índice de acidentes de trânsito: %d em cidade %d\n", maior_indice_acidentes, cidade_maior_indice + 1);
    printf("   Menor índice de acidentes de trânsito: %d em cidade %d\n", menor_indice_acidentes, cidade_menor_indice + 1);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);
    printf("c) Média de acidentes com vítimas no Rio Grande do Sul: %.2f\n", media_acidentes_RS);

    return 0;
}
