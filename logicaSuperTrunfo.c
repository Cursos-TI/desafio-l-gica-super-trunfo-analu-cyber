#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Escolha do atributo para comparação (definido diretamente no código)
    int atributo = 1; // 1 - População, 2 - Área, 3 - PIB, 4 - Densidade Populacional, 5 - PIB per capita

    printf("\nComparação de cartas\n");

    if (atributo == 1) { // Comparação por população
        printf("Atributo: População\n");
        printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else if (atributo == 2) { // Comparação por área
        printf("Atributo: Área\n");
        printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else if (atributo == 3) { // Comparação por PIB
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else if (atributo == 4) { // Comparação por Densidade Populacional (menor vence)
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else if (atributo == 5) { // Comparação por PIB per capita
        printf("Atributo: PIB per capita\n");
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    return 0;
}
