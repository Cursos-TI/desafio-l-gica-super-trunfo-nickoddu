#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigoCidade1[3], codigoCidade2[3];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("*** Carta 1 ***\n");

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigoCidade1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome1);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos1);


    printf("\nCódigo da cidade: %s\n", codigoCidade1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos1);
    densidadePopulacional1 = (unsigned long int)(populacao1 / area1);
    printf("Densidade Populacional: %.2f\n", populacao1 / area1);
    pibPerCapita1 = (unsigned long int)(pib1 / populacao1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n*** Carta 2 ***\n");

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigoCidade2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);


    printf("\nCódigo da cidade: %s\n", codigoCidade2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos2);
    densidadePopulacional2 = (unsigned long int)(populacao2 / area2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    pibPerCapita2 = (unsigned long int)(pib2 / populacao2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n*** Comparações***\n\n");


     if (densidadePopulacional1 > densidadePopulacional2){
        printf("A densidade populacional da cidade %s é maior que a da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("A densidade populacional da cidade %s é maior que a da cidade %s\n", nome2, nome1);

    }
    if (populacao1 > populacao2){
        printf("A população da cidade %s é maior que a da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("A população da cidade %s é maior que a da cidade %s\n", nome2, nome1);

    }

    if (area1 > area2){
        printf("A área da cidade %s é maior que a da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("A área da cidade %s é maior que a da cidade %s\n", nome2, nome1);

    }

    if (pib1 > pib2){
        printf("O PIB da cidade %s é maior que o da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("O PIB da cidade %s é maior que o da cidade %s\n", nome2, nome1);

    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("O número de pontos turísticos da cidade %s é maior que a da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("O número de pontos turísticos da cidade %s é maior que a da cidade %s\n", nome2, nome1);

    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("O PIB per Capita da cidade %s é maior que a da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("O PIB per Capita da cidade %s é maior que a da cidade %s\n", nome2, nome1);

    }

    if (superPoder1 > superPoder2){
        printf("O Super Poder da cidade %s é maior que o da cidade %s\n", nome1, nome2);
    
    } else { 
        printf("O Super Poder da cidade %s é maior que o da cidade %s\n", nome2, nome1);

    }
    
    return 0;
}