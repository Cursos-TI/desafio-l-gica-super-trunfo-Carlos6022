// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

#include <stdio.h>
int main() {

    // Declaração de variáveis para armazenar os dados das cartas.
    char estado1, estado2;
    char codigoDaCarta1[20], codigoDaCarta2[20];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;


    // Identificação da primeira carta
    printf("-----Esta é a carta 1-------\n");

    // Coleta de informações da carta 1
    printf("-----------ESTADO-----------\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("------CÓDIGO DA CARTA-------\n");
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:AO1, B03): ");
    scanf("%s", codigoDaCarta1);

    printf("-------NOME DA CIDADE-------\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade1);

    printf("---------POPULAÇÃO----------\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("-------ÁREA (em km²)--------\n");
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("-------------PIB------------\n");
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos1);


    //calcula a densidade populacional e armazena na variavel
    densidade_populacional1 = (float)populacao1 / area1;

    //calcula o PIB per Capita da cidade e armazena na variavel
    pib_per_capita1 = pib1 / (float)populacao1;

    // Identificação da segunda carta
    printf("-----Esta é a carta 2-------\n");

    // Coleta de informações da carta 2
    printf("-----------ESTADO-----------\n");
    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); // Adiciona espaço antes para consumir o \n pendente

    printf("------CÓDIGO DA CARTA-------\n");
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:AO1, B03): ");
    scanf("%s", codigoDaCarta2);

    printf("-------NOME DA CIDADE-------\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade2);

    printf("---------POPULAÇÃO----------\n");
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("-------ÁREA (em km²)--------\n");
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("-------------PIB------------\n");
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos2);


    //calcula a densidade populacional e armazena na variavel
    densidade_populacional2 = populacao2 / area2;

    //calcula o PIB per Capita da cidade e armazena na variavel
    pib_per_capita2 = pib2 / populacao2;

    //Calcula o super poder
    //Carta 1
    superPoder1 = 
        (float)populacao1 + 
        (float)area1 + 
        (float)pib1 + 
        (float)pontosTuristicos1 + 
        (float)pib_per_capita1 + 
        (1.0 / (float)densidade_populacional1);

    //Carta 2
    superPoder2 = 
        (float)populacao2 + 
        (float)area2 + 
        (float)pib2 + 
        (float)pontosTuristicos2 + 
        (float)pib_per_capita2 + 
        (1.0 / (float)densidade_populacional2);


    //Opção para o usuario escolher o atributo a ser comparado
    int atributoEscolhido;

    printf("Digite um número que corresponda ao atributo que deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área (em km²)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (hab/km²)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder (soma todos os atributos da carta)\n");

    scanf("%d", &atributoEscolhido);

    // Comparação de Cartas:
    // Verifica qual atributo possui o maior valor
    if(atributoEscolhido == 1) {
        printf("----Atributo escolhido: População----\n");
        printf("Carta 1 - cidade: %s - População: %lu \n", nomeDaCidade1, populacao1);
        printf("Carta 2 - cidade: %s - População: %lu \n", nomeDaCidade2, populacao2);

        if (populacao1 > populacao2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 2) {
        printf("----Atributo escolhido: Área----\n");
        printf("Carta 1 - cidade: %s - Área: %.2f km²\n", nomeDaCidade1, area1);
        printf("Carta 2 - cidade: %s - Área: %.2f km²\n", nomeDaCidade2, area2);

        if (area1 > area2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 3) {
        printf("----Atributo escolhido: PIB----\n");
        printf("Carta 1 - cidade: %s - PIB: %.2f bilhões de reais\n", nomeDaCidade1, pib1);
        printf("Carta 2 - cidade: %s - PIB: %.2f bilhões de reais\n", nomeDaCidade2, pib2);

        if (pib1 > pib2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 4) {
        printf("----Atributo escolhido: Pontos Turísticos----\n");
        printf("Carta 1 - cidade: %s - Pontos Turísticos: %d \n", nomeDaCidade1, pontosTuristicos1);
        printf("Carta 2 - cidade: %s - Pontos Turísticos: %d \n", nomeDaCidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 5) {
        printf("----Atributo escolhido: Densidade Populacional----\n");
        printf("Carta 1 - cidade: %s - Densidade Populacional: %.2f hab/km²\n", nomeDaCidade1, densidade_populacional1);
        printf("Carta 2 - cidade: %s - Densidade Populacional: %.2f hab/km²\n", nomeDaCidade2, densidade_populacional2);

        if (densidade_populacional1 < densidade_populacional2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 6) {
        printf("----Atributo escolhido: PIB per capita----\n");
        printf("Carta 1 - cidade: %s - PIB per capita: %.2f reais\n", nomeDaCidade1, pib_per_capita1);
        printf("Carta 2 - cidade: %s - PIB per capita: %.2f reais\n", nomeDaCidade2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    if(atributoEscolhido == 7) {
        printf("----Atributo escolhido: Super Poder----\n");
        printf("Carta 1 - cidade: %s - Super Poder: %.2f \n", nomeDaCidade1, superPoder1);
        printf("Carta 2 - cidade: %s - Super Poder: %.2f \n", nomeDaCidade2, superPoder2);

        if (superPoder1 > superPoder2){
          printf("Resultado: A cidade %s venceu! (Carta 1)", nomeDaCidade1);
        }else{
          printf("Resultado: A cidade %s venceu! (Carta 2)", nomeDaCidade2);
        }
    }

    return 0;
}