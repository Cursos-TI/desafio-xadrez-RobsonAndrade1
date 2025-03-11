// Tema 3 - Movimentação de Peças de Xadrez com Recursividade e Loops Complexos

#include <stdio.h>

// Função recursiva para mover a Torre para a Direita

    void moverTorre(int casas) {
    if (casas > 0) {
    printf("Torre - Direita\n");
    moverTorre(casas - 1);
    }
}

// Função recursiva para mover a Rainha para a Esquerda

    void moverRainha(int casas) {
    if (casas > 0) {
    printf("Rainha - Esquerda\n");
    moverRainha(casas - 1);
    }
}

// Função para mover o Bispo usando loops aninhados

    void moverBispo(int casas) {
    // Loop externo para o movimento vertical
    for (int i = 0; i < casas; i++) { 
        printf ("Bispo - cima\n");

        // Loop interno para o movimento horizontal
        for (int j = 0; j < 1; j++) { 
            printf("Bispo - Direita\n");
        }
    }
}

int main() {

// Movimenta a Torre

    moverTorre(5);
    printf("\n");

// Movimenta a Rainha

    moverRainha(8);
    printf("\n");

// Movimenta o Bispo 

    moverBispo(5);
    printf("\n");

// Loop externo para controlar o movimento do cavalo

    for (int i = 0, j = 0; i < 2 && j < 1; i++, j++) {
        
        // Loop para o movimento "Cima"
        for (int k = 0; k < 2; k++) {
            printf("Cavalo - Cima\n");  
        }

            // Loop para o movimento "Direita"
            for (int l = 0; l < 1; l++) {
                printf("Cavalo - Direita\n");  
            }
    }

    printf("\n"); // Pula Uma Linha

    return 0;
}
