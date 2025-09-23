#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // =================================================================
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 1
    // =================================================================
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // MESTRE: Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1; // MESTRE: Nova variável
    int atributo;       // Para ser utilisado no Switch

    // =================================================================
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 2
    // =================================================================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // MESTRE: Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2; // MESTRE: Nova variável

    printf("===================================================================\n");
    printf("              SUPER TRUNFO - COMPARANDO CARTAS\n");
    printf("===================================================================\n");

    // =================================================================
    // ENTRADA DE DADOS - CARTA 1
    // =================================================================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // MESTRE: Usando %lu para unsigned long int

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =================================================================
    // ENTRADA DE DADOS - CARTA 2
    // =================================================================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // MESTRE: Usando %lu para unsigned long int

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =================================================================
    // CÁLCULOS - CARTA 1
    // =================================================================
    // Calcula a densidade populacional
    densidade1 = (float)populacao1 / area1;
    // Calcula o PIB per capita
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    // MESTRE: Calcula o Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_per_capita1 + (1.0 / densidade1);

    // =================================================================
    // CÁLCULOS - CARTA 2
    // =================================================================
    // Calcula a densidade populacional
    densidade2 = (float)populacao2 / area2;
    // Calcula o PIB per capita
    pib_per_capita2 = (pib2 * 1e9) / populacao2;
    // MESTRE: Calcula o Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_per_capita2 +
                   (1.0 / densidade2);

    // Exibição dos dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("A desidade populacional é: %.2f hab/km² \n", densidade1);
    printf("O PIB Percapita é: %.2f Reais \n", pib_per_capita1);
    printf("Super Poder1: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("A desidade populacional é: %.2f hab/km²\n", densidade2);
    printf("O PIB Percapita é: %.2f Reais \n", pib_per_capita2);
    printf("Super Poder2: %.2f\n", super_poder2);

    // =================================================================
    // COMPARAÇÃO DAS CARTAS E EXIBIÇÃO DO RESULTADO
    // =================================================================
    //
    // REQUISITO: Escolher UM atributo para a comparação.
    // A escolha é feita diretamente aqui no código.
    // Atributo escolhido: Populacao (maior valor vence).
    // Para alterar, basta trocar 'populaca1' e 'populaca2' por outro atributo
    // como 'super_poder1', 'super_poder2', etc.
    // Lembre-se: para Densidade Populacional, o MENOR vence (use o sinal de '<').
    

    // =================================================================
    // NOVO REQUISITO: MENU INTERATIVO PARA COMPARAÇÃO
    // =================================================================

    printf("\n===================================================================\n");
    printf("              ESCOLHA O ATRIBUTO PARA A DISPUTA\n");
    printf("===================================================================\n");
    printf("1. Populacao (maior vence)\n");
    printf("2. Area (maior vence)\n");
    printf("3. PIB (maior vence)\n");
    printf("4. Numero de Pontos Turisticos (maior vence)\n");
    printf("5. Densidade Demografica (MENOR vence)\n");
    printf("6. PIB Per Capita (Maior vence)\n");
     printf("7. Super Poder (Maior vence)\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &atributo);
    printf("===================================================================\n");

    printf("\n===================================================================\n");
    printf("                      RESULTADO DA DISPUTA\n");
    printf("===================================================================\n");
    // =================================================================
    // NOVO REQUISITO: LÓGICA DE DECISÃO COM SWITCH
    // =================================================================
    switch (atributo)
    {
    case 1: // Comparação por População
        printf("--- Atributo Escolhido: Populacao ---\n");
        printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu habitantes\n\n", cidade2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2: // Comparação por Área
        printf("--- Atributo Escolhido: Area ---\n");
        printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n\n", cidade2, area2);

        if (area1 > area2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (area2 > area1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3: // Comparação por PIB
        printf("--- Atributo Escolhido: PIB ---\n");
        printf("Carta 1 - %s: %.2f bilhoes de reais\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhoes de reais\n\n", cidade2, pib2);

        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (pib2 > pib1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4: // Comparação por Pontos Turísticos
        printf("--- Atributo Escolhido: Numero de Pontos Turisticos ---\n");
        printf("Carta 1 - %s: %d pontos\n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d pontos\n\n", cidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5: // Comparação por Densidade Demográfica (MENOR VENCE)
        printf("--- Atributo Escolhido: Densidade Demografica ---\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n\n", cidade2, densidade2);

        if (densidade1 < densidade2)
        {
            printf("Resultado: Carta 1 (%s) venceu! (Menor densidade)\n", cidade1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Resultado: Carta 2 (%s) venceu! (Menor densidade)\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    case 6: // Comparação por PIB Per Capita
        printf("--- Atributo Escolhido: PIB Per Capita ---\n");
        printf("Carta 1 - %s: %.2f pib percapita\n", cidade1, pib_per_capita1);
        printf("Carta 2 - %s: %.2f pib percapita\n", cidade2, pib_per_capita2);

        if (pib_per_capita1 > pib_per_capita2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (pib_per_capita2 > pib_per_capita1)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;
        case 7: // Comparação por Super Poder
        printf("--- Atributo Escolhido: PIB Per Capita ---\n");
        printf("Carta 1 - %s: %.2f super poder\n", cidade1, pib_per_capita1);
        printf("Carta 2 - %s: %.2f super poder\n\n", cidade2, pib_per_capita2);

        if (super_poder1 > super_poder2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        }
        else if (super_poder2 > super_poder2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    default: // Caso o usuário digite uma opção inválida
        printf("Opcao invalida! Por favor, execute o programa novamente e escolha um numero de 1 a 7.\n");
        break;
    }

    printf("===================================================================\n");

    return 0;
}