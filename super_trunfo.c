#include <stdio.h>

typedef struct {
    char estado;                
    char codigo[4];              
    char nomeCidade[60];         
    int  populacao;              
    float areaKm2;               
    float pib;                   
    int  pontosTuristicos;       
} Carta;

int main(void) {
    Carta c1, c2;

    
    printf("Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &c1.estado);

    printf("Codigo (ex: A01): ");
    scanf(" %3s", c1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %59[^\n]", c1.nomeCidade);

    printf("Populacao: ");
    scanf(" %d", &c1.populacao);

    printf("Area (em km2): ");
    scanf(" %f", &c1.areaKm2);

    printf("PIB: ");
    scanf(" %f", &c1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &c1.pontosTuristicos);

   
    printf("\nCarta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &c2.estado);

    printf("Codigo (ex: A01): ");
    scanf(" %3s", c2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %59[^\n]", c2.nomeCidade);

    printf("Populacao: ");
    scanf(" %d", &c2.populacao);

    printf("Area (em km2): ");
    scanf(" %f", &c2.areaKm2);

    printf("PIB: ");
    scanf(" %f", &c2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &c2.pontosTuristicos);

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Nome da Cidade: %s\n", c1.nomeCidade);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f km%c\n", c1.areaKm2, 0xFD);     
    printf("PIB: %.2f\n", c1.pib);
    printf("Numero de Pontos Turisticos: %d\n", c1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Nome da Cidade: %s\n", c2.nomeCidade);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f km%c\n", c2.areaKm2, 0xFD);     
    printf("PIB: %.2f\n", c2.pib);
    printf("Numero de Pontos Turisticos: %d\n", c2.pontosTuristicos);

    return 0;
}
