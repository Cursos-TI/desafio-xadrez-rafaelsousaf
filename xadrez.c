#include <stdio.h>

// Desafio Movimentação de Peças de Xadrez - Nível novato 
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* =========================
   Parâmetros da simulação
   ========================= */
static const int BISPO_PASSOS  = 5;  /* diagonal superior direita */
static const int TORRE_PASSOS  = 5;  /* direita */
static const int RAINHA_PASSOS = 8;  /* esquerda */

/* Separador visual para organizar os blocos de saída. */
static void separador(const char *titulo) {
    printf("\n========================================\n");
    printf("%s\n", titulo);
    printf("========================================\n");
}

int main(void) {
    printf("\n========================================\n");
    printf("        MOVIMENTACAO PECAS DE XADREZ\n");
    printf("========================================\n");

    /* -------------------------------------------
       Bloco 1 — Bispo (for)
       5 casas na diagonal superior direita.
       Cada passo imprime "Cima" e "Direita".
       ------------------------------------------- */
    separador("Bispo — 5 casas na diagonal superior direita");
    for (int passo = 1; passo <= BISPO_PASSOS; passo++) {
        printf("Passo %d/%d:\n", passo, BISPO_PASSOS);
        printf("Cima\n");
        printf("Direita\n");
    }

    /* -------------------------------------------
       Bloco 2 — Torre (while)
       5 casas para a direita.
       ------------------------------------------- */
    separador("Torre — 5 casas para a direita");
    int t = 1;
    while (t <= TORRE_PASSOS) {
        printf("Passo %d/%d:\n", t, TORRE_PASSOS);
        printf("Direita\n");
        t++;
    }

    /* -------------------------------------------
       Bloco 3 — Rainha (do-while)
       8 casas para a esquerda.
       ------------------------------------------- */
    separador("Rainha — 8 casas para a esquerda");
    int r = 1;
    do {
        printf("Passo %d/%d:\n", r, RAINHA_PASSOS);
        printf("Esquerda\n");
        r++;
    } while (r <= RAINHA_PASSOS);

  /* ---------------------------------------------------
       Fim da Simulação
       --------------------------------------------------- */
    separador("Fim da Simulação");

    return 0;
}

