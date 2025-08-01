#include <stdio.h>
#include <stdlib.h>

int main() {
    // --- Dados da Carta 1 ---
    char estado1[3] = "A";
    char codigo1[10] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontos_turisticos1 = 50;

    // --- Dados da Carta 2 ---
    char estado2[3] = "B";
    char codigo2[10] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontos_turisticos2 = 30;

    // --- Cálculo de métricas derivadas ---
    float densidade1 = (float)populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1e9) / populacao1;

    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1e9) / populacao2;

    // --- Variáveis de controle ---
    int escolha1, escolha2;
    float valor1A, valor1B, valor2A, valor2B;
    float soma1, soma2;

    // --- Menu 1: Escolha do primeiro atributo ---
    printf("*** Comparação de Cartas ***\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1: valor1A = populacao1; valor1B = populacao2; break;
        case 2: valor1A = area1; valor1B = area2; break;
        case 3: valor1A = pib1; valor1B = pib2; break;
        case 4: valor1A = pontos_turisticos1; valor1B = pontos_turisticos2; break;
        case 5: valor1A = 1 / densidade1; valor1B = 1 / densidade2; break; // regra inversa
        default: 
            printf("Opção inválida!\n");
            return 1;
    }

    // --- Menu 2: Escolha do segundo atributo ---
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Você já escolheu esse atributo. Reinicie o programa e escolha diferente.\n");
        return 1;
    }

    switch (escolha2) {
        case 1: valor2A = populacao1; valor2B = populacao2; break;
        case 2: valor2A = area1; valor2B = area2; break;
        case 3: valor2A = pib1; valor2B = pib2; break;
        case 4: valor2A = pontos_turisticos1; valor2B = pontos_turisticos2; break;
        case 5: valor2A = 1 / densidade1; valor2B = 1 / densidade2; break;
        default: 
            printf("Opção inválida!\n");
            return 1;
    }

    // --- Cálculo das somas ---
    soma1 = valor1A + valor2A;
    soma2 = valor1B + valor2B;

    // --- Exibição dos resultados ---
    printf("\n*** Resultado da Comparação ***\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("Atributo 1: ");
    switch (escolha1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica (Regra Inversa)\n"); break;
    }

    printf("Atributo 2: ");
    switch (escolha2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica (Regra Inversa)\n"); break;
    }

    printf("\nValores:\n");
    printf("%s -> %.2f + %.2f = %.2f\n", cidade1, valor1A, valor2A, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", cidade2, valor1B, valor2B, soma2);

    // --- Determinação do vencedor ---
    printf("\nResultado Final:\n");
    switch (soma1 > soma2 ? 1 : soma1 < soma2 ? 2 : 0) {
        case 1: printf("Carta 1 venceu com a maior soma!\n"); break;
        case 2: printf("Carta 2 venceu com a maior soma!\n"); break;
        default: printf("Empate! As duas cartas têm a mesma pontuação.\n"); break;
    }

    return 0;
}
