#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    char codigo1[4], codigo2[4];
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float capita1, capita2;

    printf("Digite o Nome do Estado(Ex:SP): \n");
    scanf(" %2s", estado1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49s", cidade1);

    printf("Digite o Numero de Habitantes: \n");
    scanf(" %d", &populacao1);
    while (getchar() != '\n');

    printf("Digite o Código da Carta(Ex:A01,B02): \n");
    scanf(" %3s", codigo1);

    printf("Digite a Area: \n");
    scanf(" %f", &area1);
    while (getchar() != '\n');

    printf("Digite o PIB da Cidade: \n");
    scanf(" %f", &PIB1);
    while (getchar() != '\n');

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontos1);
    while (getchar() != '\n');

    printf("\n----Agora digite os Dados da Segunda Carta----\n");

    printf("Digite o Nome do Estado(Ex:SP): \n");
    scanf(" %2s", estado2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49s", cidade2);

    printf("Digite o Numero de Habitantes: \n");
    scanf(" %d", &populacao2);
    while (getchar() != '\n');

    printf("Digite o Código da Carta(A01,B02): \n");
    scanf(" %3s", codigo2);

    printf("Digite a Area: \n");
    scanf(" %f", &area2);
    while (getchar() != '\n');

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &PIB2);
    while (getchar() != '\n');

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontos2);
    while (getchar() != '\n');

    densidade1 = populacao1 / area1;
    capita1 = (PIB1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    capita2 = (PIB2 * 1000000000) / populacao2;

    printf("---Dados da cidade 1---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Código: %s\n", codigo1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f Reais\n", capita1);

    printf("\n---Dados da Cidade 2---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Código: %s\n", codigo2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f Reais\n", capita2);

    return 0;
}
