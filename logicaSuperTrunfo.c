#include <stdio.h>
#include <string.h> // MESTRE: Incluído para usar a função strcpy para nomes de atributos

// Desafio Super Trunfo - Cidades
// Tema 3 - Comparações Avançadas com Atributos Múltiplos
// Este código foi atualizado para o nível MESTRE.

int main()
{
    // =================================================================
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 1
    // =================================================================
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // =================================================================
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 2
    // =================================================================
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // MESTRE: Variáveis para a nova lógica de comparação
    int atributo1 = 0, atributo2 = 0;                       // Armazena a escolha dos dois atributos
    char nome_atributo1[50], nome_atributo2[50];            // Armazena os nomes dos atributos escolhidos
    float valor1_carta1, valor1_carta2;                     // Armazena os valores do primeiro atributo para as duas cartas
    float valor2_carta1, valor2_carta2;                     // Armazena os valores do segundo atributo para as duas cartas
    float soma_carta1, soma_carta2;                         // Armazena a soma dos atributos para cada carta

    printf("===================================================================\n");
    printf("              SUPER TRUNFO - COMPARANDO CARTAS (NIVEL MESTRE)\n");
    printf("===================================================================\n");

    // =================================================================
    // ENTRADA DE DADOS - CARTA 1
    // =================================================================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (ex: PI): ");
    // CORREÇÃO: Usar " %c" para ler um único caractere e ignorar espaços/newlines anteriores.
    scanf(" %s", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    // Usar " %[^\n]" para ler strings com espaços.
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

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
    printf("Digite o estado (ex: PI): ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =================================================================
    // CÁLCULOS - CARTA 1
    // =================================================================
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_per_capita1 + (1.0 / densidade1);

    // =================================================================
    // CÁLCULOS - CARTA 2
    // =================================================================
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_per_capita2 + (1.0 / densidade2);
    
    // Exibição dos dados da Carta 1
    printf("\n\n--- DADOS DAS CARTAS CADASTRADAS ---\n");
    printf("\n=== Carta 1 ===\n");
    printf("Cidade: %s (%s-%s)\n", cidade1, codigo1, estado1);
    // CORREÇÃO: Usar %lu para unsigned long int
    printf("Populacao: %lu\n", populacao1); 
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Cidade: %s (%s-%s)\n", cidade2, codigo2, estado2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

   // =================================================================
    // ALTERAÇÃO: ESCOLHA DO PRIMEIRO ATRIBUTO COM GOTO
    // =================================================================
    
    // 1. Criamos um rótulo (label) aqui para onde o goto irá saltar.
    escolha_atributo1:
    
    printf("\n===================================================================\n");
    printf("              ESCOLHA O PRIMEIRO ATRIBUTO PARA A DISPUTA\n");
    printf("===================================================================\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n6. PIB Per Capita\n7. Super Poder\n");
    printf("-> Digite o numero da sua escolha (1-7): ");
    scanf("%d", &atributo1);

    // 2. Se a condição for inválida, mostramos um erro e voltamos para o rótulo.
    if(atributo1 < 1 || atributo1 > 7) {
        printf("\nOpcao invalida! Escolha um numero entre 1 e 7.\n");
        goto escolha_atributo1; // Salta de volta para o início da escolha.
    }
    
    // =================================================================
    // ALTERAÇÃO: ESCOLHA DO SEGUNDO ATRIBUTO COM GOTO (MENU DINÂMICO)
    // =================================================================
    
    escolha_atributo2:

    printf("\n===================================================================\n");
    printf("              ESCOLHA O SEGUNDO ATRIBUTO (DIFERENTE DO PRIMEIRO)\n");
    printf("===================================================================\n");
    if (atributo1 != 1) printf("1. Populacao\n");
    if (atributo1 != 2) printf("2. Area\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turisticos\n");
    if (atributo1 != 5) printf("5. Densidade Demografica\n");
    if (atributo1 != 6) printf("6. PIB Per Capita\n");
    if (atributo1 != 7) printf("7. Super Poder\n");
    printf("-> Digite o numero da sua escolha: ");
    scanf("%d", &atributo2);

    // 3. Verificamos as duas condições de erro. Se qualquer uma ocorrer, voltamos.
    if (atributo2 == atributo1) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        goto escolha_atributo2;
    } 
    if (atributo2 < 1 || atributo2 > 7) {
        printf("\nOpcao invalida! Por favor, escolha uma das opcoes disponiveis.\n");
        goto escolha_atributo2;
    }


    // =================================================================
    // MESTRE: EXTRAÇÃO DOS VALORES E NOMES DOS ATRIBUTOS ESCOLHIDOS
    // =================================================================
    
    // Switch para o primeiro atributo
    switch (atributo1) {
        case 1: strcpy(nome_atributo1, "Populacao"); valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; break;
        case 2: strcpy(nome_atributo1, "Area"); valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: strcpy(nome_atributo1, "PIB"); valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: strcpy(nome_atributo1, "Pontos Turisticos"); valor1_carta1 = (float)pontosTuristicos1; valor1_carta2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_atributo1, "Densidade"); valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: strcpy(nome_atributo1, "PIB Per Capita"); valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
        case 7: strcpy(nome_atributo1, "Super Poder"); valor1_carta1 = super_poder1; valor1_carta2 = super_poder2; break;
    }

    // Switch para o segundo atributo
    switch (atributo2) {
        case 1: strcpy(nome_atributo2, "Populacao"); valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; break;
        case 2: strcpy(nome_atributo2, "Area"); valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: strcpy(nome_atributo2, "PIB"); valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: strcpy(nome_atributo2, "Pontos Turisticos"); valor2_carta1 = (float)pontosTuristicos1; valor2_carta2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_atributo2, "Densidade"); valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: strcpy(nome_atributo2, "PIB Per Capita"); valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
        case 7: strcpy(nome_atributo2, "Super Poder"); valor2_carta1 = super_poder1; valor2_carta2 = super_poder2; break;
    }

    // =================================================================
    // MESTRE: SOMA DOS ATRIBUTOS E EXIBIÇÃO DO RESULTADO FINAL
    // =================================================================
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n===================================================================\n");
    printf("                        RESULTADO DA DISPUTA\n");
    printf("===================================================================\n");
    printf("Atributos escolhidos: %s e %s\n\n", nome_atributo1, nome_atributo2);

    // Exibe os detalhes da Carta 1
    printf("--- Carta 1: %s ---\n", cidade1);
    printf(" > %s: %.2f\n", nome_atributo1, valor1_carta1);
    printf(" > %s: %.2f\n", nome_atributo2, valor2_carta1);
    printf(" > SOMA TOTAL: %.2f\n\n", soma_carta1);

    // Exibe os detalhes da Carta 2
    printf("--- Carta 2: %s ---\n", cidade2);
    printf(" > %s: %.2f\n", nome_atributo1, valor1_carta2);
    printf(" > %s: %.2f\n", nome_atributo2, valor2_carta2);
    printf(" > SOMA TOTAL: %.2f\n\n", soma_carta2);
    
    // Lógica de decisão final baseada na maior soma
    if (soma_carta1 > soma_carta2) {
        printf(">>> Resultado: CARTA 1 (%s) VENCEU! <<<\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf(">>> Resultado: CARTA 2 (%s) VENCEU! <<<\n", cidade2);
    } else {
        printf(">>> Resultado: EMPATE! <<<\n");
    }

    printf("===================================================================\n");
    printf("*A regra 'menor vence' para Densidade Demografica se aplica apenas em disputas de atributo unico.\nNa disputa de soma, o valor real e usado.\n");
    printf("===================================================================\n");

    return 0;
}