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

void MOVIMENTOS_BISPO() {

    // 5 CASAS DIAGONAL PARA CIMA E PARA DIREITA
    int numero_movimentos_bispo = 5;

    printf("\n--- --- Movimentos da Peça Bispo --- ---\n");
    printf("-> 5 Casas na Diagoal para Cima e para Direita\n");
    for (int index = 0; index < numero_movimentos_bispo; index++)
    {
        printf("Movimento N° - %d.\n", index + 1);
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("--- --- Fim dos Movimentos da Peça Bispo --- ---\n");

}

void MOVIMENTOS_RAINHA() {

    // 8 CASAS PARA ESQUERDA
    int numero_movimentos_rainha = 0;

    printf("\n--- --- Movimentos da Peça Rainha --- ---\n");
    printf("-> 8 Casas para Esquerda\n");
    while (numero_movimentos_rainha < 8)
    {
        printf("Movimento N° - %d.\n", numero_movimentos_rainha + 1);
        printf("Esquerda\n");
        numero_movimentos_rainha++;
    }
    printf("--- --- Fim dos Movimentos da Peça Rainha --- ---\n");

}

void MOVIMENTOS_TORRE() {

    // 5 CASAS PARA FRENTE
    int numero_movimentos_torre = 0;

    printf("\n--- --- Movimentos da Peça Torre --- ---\n");
    printf("-> 5 Casas para Direita\n");
    do
    {
        printf("Movimento N° - %d.\n", numero_movimentos_torre + 1);
        printf("Direita\n");
        
        numero_movimentos_torre++;
    } while (numero_movimentos_torre < 5);
    printf("--- --- Fim dos Movimentos da Peça Torre --- ---\n");

}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    MOVIMENTOS_BISPO();
    MOVIMENTOS_RAINHA();
    MOVIMENTOS_TORRE();

    return 0;
}
