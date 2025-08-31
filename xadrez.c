#include <stdio.h>
#include <locale.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void MOVIMENTOS_BISPO(int numero_movimentos_bispo) {
    if (numero_movimentos_bispo > 0) {
        printf("Movimento N° - %d.\n", 6 - numero_movimentos_bispo); // para numerar certinho
        printf("Cima\n");
        printf("Direita\n");
        MOVIMENTOS_BISPO(numero_movimentos_bispo - 1);
    }
}

void MOVIMENTOS_RAINHA(int numero_movimentos_rainha) {
    if (numero_movimentos_rainha > 0) {
        printf("Movimento N° - %d.\n", 9 - numero_movimentos_rainha);
        printf("Esquerda\n");
        MOVIMENTOS_RAINHA(numero_movimentos_rainha - 1);
    }
}

void MOVIMENTOS_TORRE(int numero_movimentos_torre) {
    if (numero_movimentos_torre > 0) {
        printf("Movimento N° - %d.\n", 6 - numero_movimentos_torre);
        printf("Direita\n");
        MOVIMENTOS_TORRE(numero_movimentos_torre - 1);
    }
}

void MOVIMENTOS_CAVALO(int numero_movimentos_cavalo) {
    if (numero_movimentos_cavalo > 0) {
        printf("Movimento N° - %d.\n", numero_movimentos_cavalo);
        printf("Baixo\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        MOVIMENTOS_CAVALO(numero_movimentos_cavalo - 1);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("\n--- --- Movimentos da Peça Bispo --- ---\n");
    MOVIMENTOS_BISPO(5);
    printf("--- --- Fim dos Movimentos da Peça Bispo --- ---\n");

    printf("\n--- --- Movimentos da Peça Rainha --- ---\n");
    MOVIMENTOS_RAINHA(8);
    printf("--- --- Fim dos Movimentos da Peça Rainha --- ---\n");

    printf("\n--- --- Movimentos da Peça Torre --- ---\n");
    MOVIMENTOS_TORRE(5);
    printf("--- --- Fim dos Movimentos da Peça Torre --- ---\n");

    printf("\n--- --- Movimentos da Peça Cavalo --- ---\n");
    MOVIMENTOS_CAVALO(1);
    printf("--- --- Fim dos Movimentos da Peça Cavalo --- ---\n");

    return 0;
}
