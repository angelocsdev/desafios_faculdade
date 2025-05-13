#include <stdio.h>
#include <string.h>  // necessário para strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado;
    char carta[4];
    char nomeCidade[50];
    int populacao1;
    int populacao2;
    float area;
    float pib;
    int pontosTuristicos;

    // O valor para a comparação das cartas é a população, por isso tem 2 variáveis dos seguintes valores

    int densidadePopulacional1 = populacao1 / area;
    int densidadePopulacional2 = populacao2 / area;
    int pibPerCapita1 = pib / populacao1;
    int pibPerCapita2 = pib / populacao2;

    int c; // variável usada no while

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada dos Dados da Carta 1:

    printf("SUPER TRUNFO - CARTA 1 \n");
    printf("Digite a letra do estado de A a H: \n");
    scanf(" %c", &estado);
    printf("Informe a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta);
    while ((c = getchar()) != '\n' && c != EOF);  // limpa o buffer antes de usar fgets
    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // limpa o \n adicional que o fgets gera
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados da Carta 1:

    printf("\nSUPER TRUNFO - CARTA 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %d\n", densidadePopulacional1);
    printf("PIB per capita: %d\n", pibPerCapita1);

    // Entrada dos Dados da Carta 2:

    printf("\nSUPER TRUNFO - CARTA 2 \n");
    printf("Digite a letra do estado de A a H: \n");
    scanf(" %c", &estado);
    printf("Informe a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", carta);
    while ((c = getchar()) != '\n' && c != EOF);  // limpa o buffer antes de usar fgets
    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0';
    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos);


    // Exibição dos Dados da Carta 2:

    printf("\nSUPER TRUNFO - CARTA 2 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %d\n", densidadePopulacional2);
    printf("PIB per capita: %d\n", pibPerCapita2);

    // Comparação de valores da população
    
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    } else{
        printf("Carta 2 venceu!\n");
    }

    return 0;
}