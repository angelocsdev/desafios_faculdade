#include <stdio.h>
#include <string.h>  // necessário para strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado;
    char carta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    int c;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("SUPER TRUNFO - CARTA 1 \n");
    printf("Digite a letra do estado de A a H: \n");
    scanf(" %c", &estado);
    // printf("Estado digitado: %c\n", estado);
    printf("Informe a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta);
    // printf("Estado digitado: %s\n", carta);
    while ((c = getchar()) != '\n' && c != EOF);  // limpa o buffer antes de usar fgets
    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0';
    // printf("Cidade digitada: %s\n", nomeCidade);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    // printf("População digitada: %d\n", populacao);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    // printf("Área digitada: %f\n", area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    // printf("PIB digitado: %f\n", pib);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);
    // printf("Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nSUPER TRUNFO - CARTA 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nSUPER TRUNFO - CARTA 2 \n");
    printf("Digite a letra do estado de A a H: \n");
    scanf(" %c", &estado);
    // printf("Estado digitado: %c\n", estado);
    printf("Informe a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta);
    // printf("Estado digitado: %s\n", carta);
    while ((c = getchar()) != '\n' && c != EOF);  // limpa o buffer antes de usar fgets
    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0';
    // printf("Cidade digitada: %s\n", nomeCidade);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao);
    // printf("População digitada: %d\n", populacao);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    // printf("Área digitada: %f\n", area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    // printf("PIB digitado: %f\n", pib);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);
    // printf("Pontos Turísticos: %d\n", pontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nSUPER TRUNFO - CARTA 2 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}