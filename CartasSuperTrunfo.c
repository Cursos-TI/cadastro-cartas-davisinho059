#include <stdio.h>

/*
Desafio Super Trunfo - Cadastro de Cartas
Nivel: Iniciante
*/

int main() {

    // ===== Declaracao das variaveis =====

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ===== Entrada de dados =====

    printf("Cadastro da Carta 1\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===== Saida de dados =====

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    //diferença das cartas 01,diferença da carta 02
  //Carta 1:
//Estado: A
//Codigo: A01
//Nome da Cidade: Parnaiba
//Populacao: 162.159
//Area: 435.57 km2
//PIB: 2.60 bilhoes de reais
//Numero de Pontos Turisticos: 15

//Carta 2:
//Estado: B
//Codigo: B02
//Nome da Cidade: Rio Branco
//Populacao: 387.850
//Area: 8836.00 km2
//PIB: 26.00 bilhoes de reais
//Numero de Pontos Turisticos: 15


return 0;
  
}
