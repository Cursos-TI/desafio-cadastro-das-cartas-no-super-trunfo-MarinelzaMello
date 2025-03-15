#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Marinelza

int Carta1 = 1;
    char Estado1 [8] = "A";
    char Codigo_da_Carta1 [19] = "A01";
    char nome_da_Cidade1[50] = "São Paulo";
    int populacao = 12000000;
    float area_km2 = 1521;
    float PIB = 699.2;
    int numero_de_Pontos_Turisticos = 10;

    
    int Carta2 = 2;
    char Estado2 [10] = "B";
    char Codigo_da_Carta2 [19] = "B01";
    char nome_da_Cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area_km2_2 = 1200;
    float PIB2 = 671.2;
    int numero_de_Pontos_Turisticos2 = 8;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta1: %d\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta1: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", nome_da_Cidade1);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", numero_de_Pontos_Turisticos);


    printf("Carta2: %d\n", Carta2);
    printf("Estado2: %s\n", Estado2);
    printf("Codigo da Carta2: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade2: %s\n", nome_da_Cidade2);
    printf("Populacao2: %d\n", populacao2);
    printf("Area2: %.2f km²\n", area_km2_2);
    printf("PIB2: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos2: %d\n", numero_de_Pontos_Turisticos2);
      
    return 0;
}
