#include <stdio.h>
// Informação sobre a carta1
    //Declarar variáveis Carta1, Estado, Codigo_da_Carta1, nome_da_Cidade, populacao, area_km², PIB, numero_de_Pontos_Turisticos
    int Carta1 = 1;
    char Estado [8] = "A";
    char Codigo_da_Carta1 [19] = "A01";
    char nome_da_Cidade[50] = "São Paulo";
    int populacao = 12325000;
    float area_km² = 1521.11;
    float PIB = 699.280;
    int numero_de_Pontos_Turisticos = 50;
    float densidade_populacional = populacao / area_km²;
    float PIB_per_capita = PIB / populacao;

    // Informação sobre a carta2
    //Declarar variáveis Carta2, Estado2, Codigo_da_Carta2, nome_da_Cidade2, populacao2, area_km²_2, PIB2, numero_de_Pontos_Turisticos2
    int Carta2 = 2;
    char Estado2 [10] = "B";
    char Codigo_da_Carta2 [19] = "B02";
    char nome_da_Cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area_km²_2 = 1200.25;
    float PIB2 = 300.500;
    int numero_de_Pontos_Turisticos2 = 30;
    float densidade_populacional2 = populacao2 / area_km²_2;
    float PIB_per_capita2 = PIB2 / populacao2;

    // Exibir as informações das cartas
    // Exibir as informações da carta1    
    printf("Carta1: %d\n", Carta1);
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta1: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", nome_da_Cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area_km²);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_Pontos_Turisticos);

    // Informar a densidade populacional e o PIB per capita
    densidade_populacional = (float) populacao / area_km²;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);

    PIB_per_capita = (float) PIB / populacao;
    printf("PIB per Capita: %f reais\n", PIB_per_capita);

    // pular linha
    printf("\n");
   
    // Exibir as informações da carta2
    printf("Carta2: %d\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", nome_da_Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area_km²_2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_Pontos_Turisticos2);

    // Informar a densidade populacional e o PIB per capita
    densidade_populacional2 = (float) populacao2 / area_km²_2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);

    PIB_per_capita2 = (float) PIB2 / populacao2;
    printf("PIB per Capita: %f reais\n", PIB_per_capita2);

    // pular linha
    printf("\n");
    // Comparação entre as cartas
    printf("Comparação entre as cartas:\n");
    // Comparar a população
    int resultado_populacao = populacao > populacao2;
    printf("População: Carta1 venceu (%d)\n", populacao > populacao2 );
    // Comparar a área
    float resultado_area = area_km² > area_km²_2;
    printf("Área: Carta1 venceu (%d)\n", area_km² > area_km²_2);
    // Comparar o PIB
    float resultado_PIB = PIB > PIB2;
    printf("PIB: Carta1 venceu (%d)\n", PIB > PIB2);
    // Comparar o número de pontos turísticos
    int resultado_pontos_turisticos = numero_de_Pontos_Turisticos > numero_de_Pontos_Turisticos2;
    printf("Pontos Turísticos: Carta1 venceu (%d)\n", numero_de_Pontos_Turisticos > numero_de_Pontos_Turisticos2);
    // Comparar a densidade populacional
    float resultado_densidade_populacional = densidade_populacional < densidade_populacional2;
    printf("Densidade Populacional: Carta2 venceu (%d)\n", densidade_populacional < densidade_populacional2);
    // Comparar o PIB per capita
    float resultado_PIB_per_capita = PIB_per_capita > PIB_per_capita2;
    printf("PIB per Capita: Carta1 venceu (%d)\n", PIB_per_capita > PIB_per_capita2);
    // comparar super poder
    int resultado = populacao * area_km² * PIB * numero_de_Pontos_Turisticos > populacao2 * area_km²_2 * PIB2 * numero_de_Pontos_Turisticos2;
    printf("Super Poder: Carta1 venceu (%d)\n", populacao * area_km² * PIB * numero_de_Pontos_Turisticos > populacao2 * area_km²_2 * PIB2 * numero_de_Pontos_Turisticos2);
             
    return 0;
}
```