#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float densidadeP1, densidadeP2;
    float pib_percapita1, pib_percapita2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    printf("*---------Cadastro de cartas do Super Trunfo---------*\n\n");

    //Leitura dos dados da primeira carta.

    printf("----------Primeira Carta---------------------\n");
    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo: ");
    scanf(" %s", codigo1);
    printf("Digite a cidade: ");
    scanf(" %s", cidade1);
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Leitura dos dados da segunda carta.

     printf("----------Segunda Carta---------------------\n");
    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo: ");
    scanf(" %s", codigo2);
    printf("Digite a cidade: ");
    scanf(" %s", cidade2);
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //imprimir os dados das duas cartas.

    densidadeP1 = (float)(populacao1) / area1;
    densidadeP2 = (float)(populacao2) / area2;
    pib_percapita1 = (float)(populacao1)/ pib1;
    pib_percapita2 = (float)(populacao2)/ pib2;

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f Bilhoẽs de Reais\nNumero de pontos turisticos: %d\nDenseidade populacional: %.2f\nPib Per Capita: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidadeP1, pib_percapita1);

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f Bilhoẽs de Reais\nNumero de pontos turisticos: %d\nDenseidade populacional: %.2f\nPib Per Capita: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidadeP2, pib_percapita2);

    return 0;
}
