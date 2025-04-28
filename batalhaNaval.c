#include <stdio.h>
#define TAM 5

int main() {
    int tabuleiro[TAM][TAM] = {0};
    
    // Navio horizontal (3 posições)
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;
    
    // Navio vertical (3 posições)
    tabuleiro[2][4] = 1;
    tabuleiro[3][4] = 1;
    tabuleiro[4][4] = 1;
    
    printf("=== Nível Novato ===\n");
    printf("Tabuleiro 5x5 com navios horizontal e vertical:\n");
    
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
