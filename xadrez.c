// Tema 3 - Movimentação de Peças de Xadrez

#include <stdio.h>

int main() {

// Move a Torre 5 Casa Para Direita (usando o for)

    for (int i =0; i < 5; i++) {

        printf("Torre - Direita\n"); //Imprime a Direção Da Peça
    }

    printf("\n"); // Pula Uma Linha

// Move o Bispo 5 Casas na Diagonal para Cima e Direita (usando while)

    int j = 0;
    while (j < 5) {

        printf("Bispo - Cima, Direita\n"); // Imprime o movimento diagonal do Bispo
        j++;
    }

    printf("\n"); // Pula Uma Linha

// Move a Rainha 8 Casas Para a Esquerda (usando do-while)

    int k = 0;
    do {

        printf("Rainha - Esquerda\n"); // Imprime a direção da peça
        k++;
    } while (k < 8);

    printf("\n"); // Pula Uma Linha

// Implementando o Movimento do Cavalo com Loop Aninhado

    int movimentoCompleto = 1; // Flag para cotrolar o movimento em 'L'

    while (movimentoCompleto--) {

        for (int i = 0; i < 2; i++) {
            printf("Cavalo - Baixo\n"); // Imprime "Baixo" duas vezes
        }
        printf("Cavalo - Esquerda\n"); // Imprime "Esquerda" uma vez
    }

    printf("\n"); // Pula Uma Linha

    return 0;

}