#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char numeroCarta1[3], numeroCarta2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int numPopulacao1, numPopulacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Carta 1: \n");
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
    scanf("%i", &numPopulacao1);

    //Área
    printf("Area em km: \n");
    scanf(" %f", &area1);

    //PIB
    printf("PIB do país: \n");
    scanf(" %f", &pib1);

    //Pontos turisticos
    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos1);

    //Print carta 1
    printf("\n=================\n");
    printf("Carta 1: \n");
    printf("Inicial do Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero da população: %i\n", numPopulacao1);
    printf("Area do País: %.2f km²\n", area1);
    printf("PIB do país: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicos1);
    return 0;
}
