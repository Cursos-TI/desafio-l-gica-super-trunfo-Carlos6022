// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

#include <stdio.h>
int main() {

    // Declaração de variáveis para armazenar os dados das cartas.

    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_demografica1, densidade_demografica2;

    // Identificação da primeira carta
    printf("######## Esta é a carta 1 #########\n");

    // Coleta de informações da carta 1
    printf("----------------País---------------\n");
    printf("Qual o nome do país: ");
    scanf(" %s", pais1);

    printf("-------------POPULAÇÃO-------------\n");
    printf("Digite o número de habitantes do país: ");
    scanf("%lu", &populacao1);

    printf("-----------ÁREA (em km²)-----------\n");
    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("----------------PIB----------------\n");
    printf("Digite o Produto Interno Bruto do país: ");
    scanf("%f", &pib1);

    printf("----NÚMERO DE PONTOS TURÍSTICOS----\n");
    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%d", &pontosTuristicos1);

    // calcula a densidade populacional e armazena na variavel
    densidade_demografica1 = (float)populacao1 / area1;

    // Identificação da segunda carta
    printf("######## Esta é a carta 2 #########\n");

    // Coleta de informações da carta 2
    printf("----------------País---------------\n");
    printf("Qual o nome do país: ");
    scanf(" %s", pais2);

    printf("-------------POPULAÇÃO-------------\n");
    printf("Digite o número de habitantes do país: ");
    scanf("%lu", &populacao2);

    printf("-----------ÁREA (em km²)-----------\n");
    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("-----------------PIB---------------\n");
    printf("Digite o Produto Interno Bruto do país: ");
    scanf("%f", &pib2);

    printf("----NÚMERO DE PONTOS TURÍSTICOS----\n");
    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%d", &pontosTuristicos2);

    // calcula a densidade populacional e armazena na variavel
    densidade_demografica2 = (float)populacao2 / area2;

    // Opção para o usuario escolher o atributo a ser comparado
    int atributoEscolhido;

    //teste
    printf("densidade 1 %.6f \n", densidade_demografica1);
    printf("densidade 2 %.6f \n", densidade_demografica2);

    printf("### Escolha um atributo que deseja comparar ###\n");
    printf("1 - População\n");
    printf("2 - Área (em km²)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (hab/km²)\n");
    printf("Digite o número do atributo: ");

    scanf("%d", &atributoEscolhido);

    // Comparação de Cartas:
    // Verifica qual atributo possui o maior valor ou se os valores são iguais.

    switch(atributoEscolhido) {

    case 1:

        printf("+--------------------+\n");
        printf("| Atributo escolhido | População\n");
        printf("+--------------------+\n");
        printf("|      Carta 1       | País: %s - População: %lu \n", pais1, populacao1);
        printf("+--------------------+\n");
        printf("|      Carta 2       | País: %s - População: %lu \n", pais2, populacao2);
        printf("+--------------------+\n");

        if(populacao1 > populacao2) {

            printf("|     Resultado      | O País %s venceu! (Carta 1)\n", pais1);
            printf("+--------------------+\n");

        } else if(populacao1 < populacao2) {

            printf("|     Resultado      | O País %s venceu! (Carta 2)\n", pais2);
            printf("+--------------------+\n");

        } else {

            printf("|     Resultado      | Houve um empate!\n");
            printf("+--------------------+\n");

        }
        break;
        
        case 2:

        printf("+--------------------+\n");
        printf("| Atributo escolhido | Área\n");
        printf("+--------------------+\n");
        printf("|      Carta 1       | País: %s - Área: %.2f km²\n", pais1, area1);
        printf("+--------------------+\n");
        printf("|      Carta 2       | País: %s - Área: %.2f km²\n", pais2, area2);
        printf("+--------------------+\n");

        if(area1  > area2) {

            printf("|     Resultado      | O País %s venceu! (Carta 1)\n", pais1);
            printf("+--------------------+\n");

        } else if(area1 < area2) {

            printf("|     Resultado      | O País %s venceu! (Carta 2)\n", pais2);
            printf("+--------------------+\n");

        } else {

            printf("|     Resultado      | Houve um empate!\n");
            printf("+--------------------+\n");

        }
        break;

        case 3:

        printf("+--------------------+\n");
        printf("| Atributo escolhido | PIB\n");
        printf("+--------------------+\n");
        printf("|      Carta 1       | País: %s - PIB: %.2f bilhões de reais\n", pais1, pib1);
        printf("+--------------------+\n");
        printf("|      Carta 2       | País: %s - PIB: %.2f bilhões de reais\n", pais2, pib2);
        printf("+--------------------+\n");

        if(pib1 > pib2) {

            printf("|     Resultado      | O País %s venceu! (Carta 1)\n", pais1);
            printf("+--------------------+\n");

        } else if(pib1 < pib2) {

            printf("|     Resultado      | O País %s venceu! (Carta 2)\n", pais2);
            printf("+--------------------+\n");

        } else {

            printf("|     Resultado      | Houve um empate!\n");
            printf("+--------------------+\n");

        }
        break;

        case 4:

        printf("+--------------------+\n");
        printf("| Atributo escolhido | Pontos Turísticos\n");
        printf("+--------------------+\n");
        printf("|      Carta 1       | País: %s - Pontos Turísticos: %d \n", pais1, pontosTuristicos1);
        printf("+--------------------+\n");
        printf("|      Carta 2       | País: %s - Pontos Turísticos: %d \n", pais2, pontosTuristicos2);
        printf("+--------------------+\n");

        if(pontosTuristicos1 > pontosTuristicos2) {

            printf("|     Resultado      | O País %s venceu! (Carta 1)\n", pais1);
            printf("+--------------------+\n");

        } else if(pontosTuristicos1 < pontosTuristicos2) {

            printf("|     Resultado      | O País %s venceu! (Carta 2)\n", pais2);
            printf("+--------------------+\n");

        } else {

            printf("|     Resultado      | Houve um empate!\n");
            printf("+--------------------+\n");

        }
        break;

        case 5:
        printf("+--------------------+\n");
        printf("| Atributo escolhido | Densidade Demográfica\n");
        printf("+--------------------+\n");
        printf("|      Carta 1       | País: %s - Densidade Demográfica: %.6f hab/km²\n", pais1, densidade_demografica1);
        printf("+--------------------+\n");
        printf("|      Carta 2       | País: %s - Densidade Demográfica: %.6f hab/km²\n", pais2, densidade_demografica2);
        printf("+--------------------+\n");
        if(densidade_demografica1 < densidade_demografica2) {

            printf("|     Resultado      | O País %s venceu! (Carta 1)\n", pais1);
            printf("+--------------------+\n");

        } else if(densidade_demografica1 > densidade_demografica2) {

            printf("|     Resultado      | O País %s venceu! (Carta 2)\n", pais2);
            printf("+--------------------+\n");

        } else {

            printf("|     Resultado      | Houve um empate!\n");
            printf("+--------------------+\n");

        }
        break;

    default:
        printf("### Opção inválida ###");
        break;
    }

    return 0;
}