#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Carta 1
    
    char estado1;
    char codigo1[3] ;
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Alterações para desafio aventureiro
    float densidade_populacao1;
    float pib_percapta1;
    // Alterações para nível mestre
    float superpoder1;

  //Carta 2
    
    char estado2;
    char codigo2[3] ;
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Alterações para nível aventureiro
    float densidade_populacao2;
    float pib_percapta2;
    // Alterações para nível mestre
    float superpoder2;
    
  // Alterações para nível aventureiro

  //Carta 1
        printf("----------\nInformações para a primeira carta\n----------\n");
        printf("Coloque a letra do estado (Entre A e H): \n");
        scanf(" %c", &estado1);
        printf("Coloque o código da cidade (número entre 01 e 04): \n");
        scanf("%s", &codigo1);
        printf("Coloque o nome da cidade: \n");
        scanf("%s", &nome_cidade1);
        printf("Coloque o número da população: \n");
        scanf("%d", &populacao1);
        printf("Coloque a área em km²: \n");
        scanf("%f", &area1);
        printf("Coloque o PIB em bilhões reais: \n");
        scanf("%f", &pib1);
        printf("Coloque o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos1);
        // Alterações para nível aventureiro
        densidade_populacao1=((float) populacao1 / area1);
        pib_percapta1=((pib1 * 1000000000) / populacao1);
        // Alterações para nível mestre
        superpoder1=(float) populacao1 + area1 + pib1 + pontos_turisticos1 + (1.0 / densidade_populacao1) + pib_percapta1;
        

  //Carta 2
        printf("----------\nInformações para a segunda carta\n----------\n");
        printf("Coloque a letra do estado (Entre A e H): \n");
        scanf(" %c", &estado2);
        printf("Coloque o código da cidade (número entre 01 e 04): \n");
        scanf("%s", &codigo2);
        printf("Coloque o nome da cidade: \n");
        scanf("%s", &nome_cidade2);
        printf("Coloque o número da população: \n");
        scanf("%d", &populacao2);
        printf("Coloque a área em km²: \n");
        scanf("%f", &area2);
        printf("Coloque o PIB em bilhões reais: \n");
        scanf("%f", &pib2);
        printf("Coloque o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);
        // Alterações para nível aventureiro
        densidade_populacao2=((float) populacao2 / area2);
        pib_percapta2=((pib2 * 1000000000) / populacao2);
        // Alterações para nível mestre
        superpoder2=(float) populacao2 + area2 + pib2 + pontos_turisticos2 + (1.0 / densidade_populacao2) + pib_percapta2;
        


  // Área para exibição dos dados da cidade
  //Carta 1        
        printf("----------\nPrimeira Carta:\n----------\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1,codigo1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos Turísticos: %d\n", pontos_turisticos1);
        // Alterações para nível aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacao1);
        printf("PIB per Capita: %.2f reais\n----------\n", pib_percapta1);
        

  //Carta 2                
        printf("----------\nSegunda Carta:\n----------\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2,codigo2);
        printf("Nome da cidade: %s\n", nome_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos Turísticos: %d\n", pontos_turisticos2);
        // Alterações para nível aventureiro
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacao2);
        printf("PIB per Capita: %.2f reais\n", pib_percapta2);

  // Alterações para nível mestre
  // comparativo de cartas

    // População
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");
    
    // Área
    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");
    
    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");  

    // Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Pontos turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos turísticos: Carta 2 venceu (0)\n");  

    // Densidade populacional
    if (densidade_populacao1 < densidade_populacao2)
        printf("Densidade populacional (vence o menor): Carta 1 venceu (1)\n");
    else
        printf("Densidade populacional (vence o menor): Carta 2 venceu (0)\n");
    
    // PIB per capita
    if (pib_percapta1 > pib_percapta2)
        printf("PIB per capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per capita: Carta 2 venceu (0)\n");
   

    // Superpoder
    if (superpoder1 > superpoder2)
        printf("Superpoder: Carta 1 venceu (1)\n");
    else
        printf("Superpoder: Carta 2 venceu (0)\n");

                
return 0;
} 
