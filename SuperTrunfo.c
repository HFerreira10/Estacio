#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[40], nomeCidade2[40];
    int populacao1 = 0, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    //Inicio da digitação da CARTA 1
    printf("Vamos iniciar a digitação da CARTA 1: \n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta: \n");
    scanf("%s", &estado1);

    printf("Digite o número de 1 a 4 para o código da carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    getchar(); //Limpa o buffer 
    scanf("%[^\n]", &nomeCidade1); // Leitura do nome da cidade com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontoTuristico1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    //Inicio da digitação da CARTA 2
    printf("Vamos iniciar a digitação da CARTA 2: \n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado da carta: \n");
    scanf("%s", &estado2);

    printf("Digite o número de 1 a 4 para o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    getchar(); //Limpa o buffer 
    scanf("%[^\n]", &nomeCidade2); // Leitura do nome da cidade com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontoTuristico2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    //Exibição dos dados das cartas
    printf("Abaixo você irá visualizar os dados das cartas que você digitou. \n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}