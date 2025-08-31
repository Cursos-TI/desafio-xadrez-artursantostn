#include <stdio.h>
#include <locale.h>

/*

 - Desafio de criar um codigo para que o Usuario escolha
   a quantidade de movimentos e a direção que cada peça
   irá fazer.

*/

// Função para ler a direção
char decidir_direcao(const char *peca) {
    char direcao;
    printf("\n------- Qual direção você quer movimentar a %s? -------\n", peca);
    printf("C - Cima\n");
    printf("B - Baixo\n");
    printf("D - Direita\n");
    printf("E - Esquerda\n");
    printf("Digite: ");
    scanf(" %c", &direcao); // espaço antes do %c para ignorar ENTER pendente
    return direcao;
}

// BISPO
void movimentos_bispo(int casas, char direcao) {
    if (casas > 0) {
        printf("Movimento Nº %d: ", casas);
        switch (direcao) {
            case 'C': case 'c': printf("Cima + Diagonal\n"); break;
            case 'B': case 'b': printf("Baixo + Diagonal\n"); break;
            case 'D': case 'd': printf("Direita + Diagonal\n"); break;
            case 'E': case 'e': printf("Esquerda + Diagonal\n"); break;
            default:  printf("Direção inválida\n");
        }
        movimentos_bispo(casas - 1, direcao);
    }
}

// RAINHA
void movimentos_rainha(int casas, char direcao) {
    if (casas > 0) {
        printf("Movimento Nº %d: ", casas);
        switch (direcao) {
            case 'C': case 'c': printf("Cima\n"); break;
            case 'B': case 'b': printf("Baixo\n"); break;
            case 'D': case 'd': printf("Direita\n"); break;
            case 'E': case 'e': printf("Esquerda\n"); break;
            default:  printf("Direção inválida\n");
        }
        movimentos_rainha(casas - 1, direcao);
    }
}

// TORRE
void movimentos_torre(int casas, char direcao) {
    if (casas > 0) {
        printf("Movimento Nº %d: ", casas);
        switch (direcao) {
            case 'C': case 'c': printf("Cima\n"); break;
            case 'B': case 'b': printf("Baixo\n"); break;
            case 'D': case 'd': printf("Direita\n"); break;
            case 'E': case 'e': printf("Esquerda\n"); break;
            default:  printf("Direção inválida\n");
        }
        movimentos_torre(casas - 1, direcao);
    }
}

// CAVALO
void movimentos_cavalo(int movimentos, char direcao) {
    if (movimentos > 0) {
        printf("Movimento Nº %d: ", movimentos);
        switch (direcao) {
            case 'C': case 'c': printf("Cavalo vai: 2x Cima + 1x Direita\n"); break;
            case 'B': case 'b': printf("Cavalo vai: 2x Baixo + 1x Esquerda\n"); break;
            case 'D': case 'd': printf("Cavalo vai: 2x Direita + 1x Cima\n"); break;
            case 'E': case 'e': printf("Cavalo vai: 2x Esquerda + 1x Baixo\n"); break;
            default:  printf("Direção inválida\n");
        }
        movimentos_cavalo(movimentos - 1, direcao);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtd;
    char dir;

    // BISPO
    dir = decidir_direcao("Bispo");
    printf("Quantos movimentos o Bispo fará? ");
    scanf("%d", &qtd);
    printf("\n--- Movimentos do Bispo ---\n");
    movimentos_bispo(qtd, dir);

    // RAINHA
    dir = decidir_direcao("Rainha");
    printf("Quantos movimentos a Rainha fará? ");
    scanf("%d", &qtd);
    printf("\n--- Movimentos da Rainha ---\n");
    movimentos_rainha(qtd, dir);

    // TORRE
    dir = decidir_direcao("Torre");
    printf("Quantos movimentos a Torre fará? ");
    scanf("%d", &qtd);
    printf("\n--- Movimentos da Torre ---\n");
    movimentos_torre(qtd, dir);

    // CAVALO
    dir = decidir_direcao("Cavalo");
    printf("Quantos movimentos o Cavalo fará? ");
    scanf("%d", &qtd);
    printf("\n--- Movimentos do Cavalo ---\n");
    movimentos_cavalo(qtd, dir);

    return 0;
}
