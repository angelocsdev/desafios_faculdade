#include <stdio.h>

// Tamanho do tabuleiro e dos navios
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    //  tabuleiro 10x10 e iniciando com 0
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // navio horizontal
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    // navio vertical
    int linha_vertical = 5;
    int coluna_vertical = 1;

    // Validação
    if (coluna_horizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: navio horizontal não cabe no tabuleiro.\n");
        return 1;
    }

    // Validação
    if (linha_vertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: navio vertical não cabe no tabuleiro.\n");
        return 1;
    }

    // Verificação de sobreposição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_horizontal][coluna_horizontal + i] != 0) {
            printf("Erro: sobreposição detectada no navio horizontal.\n");
            return 1;
        }
    }

    // Verificação de sobreposição
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] != 0) {
            printf("Erro: sobreposição detectada no navio vertical.\n");
            return 1;
        }
    }

    // Posicionar navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
    }

    // Posicionar navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    // Exibir o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
