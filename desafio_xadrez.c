#include <stdio.h>

int main(){

    //Movimento da Torre, 5 casas para a direita utlizando a estrutura for

    printf("Movimento da Torre:\n");
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // Movimento do Bispo, 5 casas na diagonal utilizando a estrutura while
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    return 0;
}