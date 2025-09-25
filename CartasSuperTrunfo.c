#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char numeroCarta1[3], numeroCarta2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int numPopulacao1, numPopulacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacao1, densidadePopulacao2;
    float pibPerCapita1, pibPerCapita2;


    //CARTA NUMERO 1

    printf("\nCarta 1: \n");
    printf("Inicial do Estado: \n");
    scanf(" %c", &estado1);

    //Codigo da carta
    printf("Codigo da carta: [01 ao 04] \n");
    scanf("%s", &numeroCarta1);
    sprintf(codigo1, "%c%s", estado1, numeroCarta1); //Concatenando inicial do estado + numero da carta;
    
    getchar(); //limpando o buffer

    //Cidade
    printf("Nome da cidade: \n");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    //Numero da população
    printf("Numero da população: \n");
    scanf("%lu", &numPopulacao1);

    //Área
    printf("Area em km: \n");
    scanf(" %f", &area1);

    //PIB
    printf("PIB do país (em bilhões de reais): \n");
    scanf(" %f", &pib1);

    //Pontos turisticos
    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos1);

    //Densidade Populacional
    densidadePopulacao1 = numPopulacao1 / area1;

    //PIB Per Capita
    pibPerCapita1 = (pib1 * 1000000000) / numPopulacao1;

    //Super poder
    float densidadeInvertida1 = 1 / densidadePopulacao1;
    float superPoder1 = numPopulacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidadeInvertida1;


    //CARTA NUMERO 2
    
    printf("\nCarta 2: \n");
    printf("Inicial do Estado: \n");
    scanf(" %c", &estado2);

    //Codigo da carta 
    printf("Codigo da carta: [01 ao 04] \n");
    scanf("%s", &numeroCarta2);
    sprintf(codigo2, "%c%s", estado2, numeroCarta2); //Concatenando inicial do estado + numero da carta;
    
    getchar(); //limpando o buffer

    //Cidade
    printf("Nome da cidade: \n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    //Numero da população
    printf("Numero da população: \n");
    scanf("%lu", &numPopulacao2);

    //Área
    printf("Area em km: \n");
    scanf(" %f", &area2);

    //PIB
    printf("PIB do país (em bilhões de reais): \n");
    scanf(" %f", &pib2);

    //Pontos turisticos
    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos2);

    //Densidade Populacional
    densidadePopulacao2 = numPopulacao2 / area2;

    //PIB Per Capita
    pibPerCapita2 = (pib2 * 1000000000) / numPopulacao2;

    //Super poder
    float densidadeInvertida2 = 1 / densidadePopulacao2;
    float superPoder2 = numPopulacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidadeInvertida2;
    
    
    
    //Print carta 1
    printf("\n=================\n");
    printf("Carta 1: \n");
    printf("Inicial do Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero da população: %lu\n", numPopulacao1);
    printf("Area do País: %.2f km²\n", area1);
    printf("PIB do país: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao1);
    printf("PIB Per Capita: %.2f reais\n",pibPerCapita1);
    printf("super poder carta 1 = %.2f\n", superPoder1);


    //Print carta 2
    printf("\n=================\n");
    printf("Carta 2: \n");
    printf("Inicial do Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero da população: %lu\n", numPopulacao2);
    printf("Area do País: %.2f km²\n", area2);
    printf("PIB do país: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB Per Capita: %.2f reais\n",pibPerCapita2);
    printf("super poder carta 2 = %.2f\n", superPoder2);


    //Comparação de cartas: 
    int resultadoPopulacao = numPopulacao1 > numPopulacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidadePopulacao1 < densidadePopulacao2;
    int resultadoPIBPerCapta = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    //Print comparação de cartas
    printf("\n=================\n");
    printf("Comparação de Cartas:\n");

    printf("\n(1) - Carta 1 vence\n");
    printf("(0) - Carta 2 vence\n");

    printf("\nPopulação: %d\n",resultadoPopulacao);
    printf("Area: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos Turisticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB Per Capita: %d\n", resultadoPIBPerCapta);
    printf("Super Poder: %d\n", resultadoSuperPoder);

    return 0;
}
