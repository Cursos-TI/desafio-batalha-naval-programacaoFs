#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    char colunas[TAMANHO_TABULEIRO] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[TAMANHO_TABULEIRO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com 0 (vazio)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Define as coordenadas do navio
    int linha_navio = 2; // Linha onde o navio será posicionado
    int coluna_navio = 3; // Coluna onde o navio será posicionado
    

    // Atribui o navio ao tabuleiro (valor 3)
    tabuleiro[linha_navio][coluna_navio] = 3; // Posiciona o navio no tabuleiro
    

    // Imprime as colunas
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("  %c", colunas[j]);
    }
    printf("\n");

    // Imprime o tabuleiro com o navio
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d", linhas[i]);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 3) {
                printf(" 3 "); // Exibe 'N' se a célula contém o navio
            } else {
                printf(" 0 "); // Exibe '0' se a célula está vazia
            }
        }
        printf("\n");
    }

    return 0;
}