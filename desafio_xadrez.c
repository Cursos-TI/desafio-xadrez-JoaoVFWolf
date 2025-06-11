#include <stdio.h>

// Função recursiva para o movimento da Torre. (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva com loops aninhados para o movimento do Bispo, (cima e direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    //Loop externo: Movimento vertical (cima)
    for (int v = 0; v < 1 v++) {
        printf("Cima\n");

        //Loop interno: Movimento Horizontal (direita)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para o proximo passo diagonal
    moverBispo(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas -1);
}

int main() {
    // Variaveis de controle, quantas casas cada peça deve andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Movimento Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    //Espaço entre peças
    printf("\n");

    //Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    //Espaço entre peças
    printf("\n");

    // Movimento da Rainha 
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    // Espaço entre peças
    printf("\n");
 
}