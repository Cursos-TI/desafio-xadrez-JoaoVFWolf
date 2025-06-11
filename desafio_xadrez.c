#include <stdio.h>

// Função recursiva para o movimento da Torre. (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}
