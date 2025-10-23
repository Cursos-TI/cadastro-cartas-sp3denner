#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Área para definição das variáveis para armazenar as propriedades das cidades

  /* Separando os dados em 1 e 2 para diferenciar as solicitações em cada etapa*/

    char estado1, estado2, codigocarta1[4], codigocarta2[4], nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

  // Área para entrada de dados

/*Coleta de dados das Cartas - Carta 1  */

    printf("Digite a primeira letra do primeiro estado: \n");
    scanf(" %c", &estado1); 

    printf("Digite a primeira letra do primeiro estado, seguido de um código para estado, entre 01 a 04 (ex:A01): \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da primeira cidade,(obs.:sem nomes compostos): \n");
    scanf("%s", nomecidade1);

    printf("Digite o numero de habitantes da primeira cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a área(m2) da primeira cidade: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    /* Coleta de dados das Cartas - Carta 2 */

    printf("Digite a primeira letra do segundo estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a primeira letra do segundo estado, seguido de um código para estado, entre 01 a 04 (ex:A01): \n");
    scanf(" %s", codigocarta2); 

    printf("Digite o nome da segunda cidade,(obs.:sem nomes compostos): \n");
    scanf("%s", nomecidade2);

    printf("Digite o numero de habitantes da segunda cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área(m2) da segunda cidade:  \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da segunda cidade: \n");
    scanf("%f", &pib2);

  // Área para exibição dos dados da cidade

    /*Print das informações da 1º carta*/

    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    /*Print das informações da 2º carta*/

    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

return 0;
} 
