#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta 1
    char estado1[3] ;
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Alterações para desafio aventureiro
    float densidade_populacao1;
    float pib_percapta1;

  //Carta 2
    char estado2[3] ;
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Alterações para desafio aventureiro
    float densidade_populacao2;
    float pib_percapta2;
    
  // Área para entrada de dados

  //Carta 1
        printf("Coloque a UF do estado para primeira cidade: \n");
        scanf("%s", estado1);
        printf("Coloque o nome para primeira cidade: \n");
        scanf("%s", nome_cidade1);
        printf("Coloque o número da população para primeira cidade: \n");
        scanf("%d", &populacao1);
        printf("Coloque a área em km² para primeira cidade: \n");
        scanf("%f", &area1);
        printf("Coloque o PIB em bilhões reais para primeira cidade: \n");
        scanf("%f", &pib1);
        printf("Coloque o número de pontos turísticos para primeira cidade: \n");
        scanf("%d", &pontos_turisticos1);
        densidade_populacao1=((float) populacao1 / area1);
        pib_percapta1=((pib1 * 1000000000) / populacao1);
        

  //Carta 2
        printf("Coloque a UF do estado para segunda cidade: \n");
        scanf("%s", estado2);
        printf("Coloque o nome para segunda cidade: \n");
        scanf("%s", nome_cidade2);
        printf("Coloque o número da população para segunda cidade: \n");
        scanf("%d", &populacao2);
        printf("Coloque a área em km² para segunda cidade: \n");
        scanf("%f", &area2);
        printf("Coloque o PIB em bilhões reais para segunda cidade: \n");
        scanf("%f", &pib2);
        printf("Coloque o número de pontos turísticos para segunda cidade: \n");
        scanf("%d", &pontos_turisticos2);
        densidade_populacao2=((float) populacao2 / area2);
        pib_percapta2=((pib2 * 1000000000) / populacao2);
        


  // Área para exibição dos dados da cidade
  //Carta 1
        printf("Carta : 01\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s01\n", estado1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos Turísticos: %d\n\n", pontos_turisticos1);
        // Alterações para desafio aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacao1);
        printf("PIB per Capita: %.2f reais", pib_percapta1);

  //Carta 2
        printf("Carta : 02\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s01\n", estado2);
        printf("Nome da cidade: %s\n", nome_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos Turísticos: %d\n", pontos_turisticos2);
        // Alterações para desafio aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacao2);
        printf("PIB per Capita: %.2f reais", pib_percapta2);

                
return 0;
} 