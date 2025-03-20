#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char Estado1; // Uma letra de 'A' a 'H' que representa um dos Estados
    char codigoCidade1[4]; // Código da cidade (ex: A01)
    char nomecidade1[50]; // Nome da cidade
    int populacao1; // População
    float area1; // Área em km²
    float PIB1; // PIB da cidade
    int pontosturistico1; // Número de pontos turísticos

    // Variáveis para a Carta 2
    char Estado2;
    char codigoCidade2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturistico2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf("%s", &Estado1); 

    printf("Código da cidade (Ex: A01): ");
    scanf("%s", codigoCidade1);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturistico1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%s", &Estado2);

    printf("Código da cidade (Ex: B02): ");
    scanf("%s", codigoCidade2);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturistico2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da cidade: %s\n", codigoCidade1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontosturistico1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da cidade: %s\n", codigoCidade2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosturistico2);

    return 0;
}