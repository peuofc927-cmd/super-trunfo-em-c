#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], nomeCidade1[50], codigo2[10], nomeCidade2[50];
    unsigned long populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    float densidade1, pibPerCapita1, densidade2, pibPerCapita2;
    float resultado1, resultado2;
    int escolha;

    printf("╔════════════════════════════╗\n");
    printf("║   S U P E R  T R U N F O   ║\n");
    printf("╚════════════════════════════╝\n\n");

    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf(" %9s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões): ");
    scanf("%f", &pib1);

    printf("Nº Pontos Turísticos: ");
    scanf("%lu", &pontosTuristicos1);

    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf(" %9s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões): ");
    scanf("%f", &pib2);

    printf("Nº Pontos Turísticos: ");
    scanf("%lu", &pontosTuristicos2);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    resultado1 = densidade1 + pibPerCapita1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    resultado2 = densidade2 + pibPerCapita2;

    printf("\n=== COMPARAÇÃO DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB per capita\n");
    printf("4 - Nº Pontos Turísticos\n");
    printf("5 - Densidade (menor vence)\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &escolha);

    float valor1 = 0.0f, valor2 = 0.0f;
    const char *nomeAtributo = "";
    int menorVence = 0;

    switch (escolha) {
        case 1:
            nomeAtributo = "População";
            valor1 = (float)populacao1;
            valor2 = (float)populacao2;
            break;
        case 2:
            nomeAtributo = "Área";
            valor1 = area1;
            valor2 = area2;
            break;
        case 3:
            nomeAtributo = "PIB per capita";
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            break;
        case 4:
            nomeAtributo = "Nº Pontos Turísticos";
            valor1 = (float)pontosTuristicos1;
            valor2 = (float)pontosTuristicos2;
            break;
        case 5:
            nomeAtributo = "Densidade";
            valor1 = densidade1;
            valor2 = densidade2;
            menorVence = 1;
            break;
        default:
            printf("Opção inválida. Comparando resultado geral.\n");
            nomeAtributo = "Resultado geral";
            valor1 = resultado1;
            valor2 = resultado2;
            break;
    }

    printf("\n=== RESULTADO ===\n");
    printf("Comparando %s:\n", nomeAtributo);
    printf("Carta 1 = %.2f\n", valor1);
    printf("Carta 2 = %.2f\n", valor2);

    if (menorVence) {
        if (valor1 < valor2) {
            printf("CARTA 1 vence pela densidade menor.\n");
        } else if (valor2 < valor1) {
            printf("CARTA 2 vence pela densidade menor.\n");
        } else {
            printf("Empate na densidade.\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("CARTA 1 vence pelo atributo selecionado.\n");
        } else if (valor2 > valor1) {
            printf("CARTA 2 vence pelo atributo selecionado.\n");
        } else {
            printf("Empate no atributo selecionado.\n");
        }
    }

    return 0;
}
