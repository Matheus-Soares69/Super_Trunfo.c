#include <stdio.h>
int main()
{
    char estado1[3];
    char estado2[3];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    char codigo1[4];
    char codigo2[4];
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int pontos1;
    int pontos2;

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

    printf("---Dados da cidade 1---\n");
    printf("Estado:%s\n", estado1);
    printf("Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Código:%s\n", codigo1);
    printf(" Area:%f\n", area1);
    printf("PIB:%f\n", PIB1);
    printf("Pontos Turisticos:%d\n", pontos1);


    printf("\n---Dados da Cidade 2---\n");
    printf("Estado:%s\n", estado2);
    printf("Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Código:%s\n", codigo2);
    printf(" Area:%f\n", area2);
    printf("PIB:%f\n", PIB2);
    printf("Pontos Turisticos:%d\n", pontos2);
     
    return 0;
}