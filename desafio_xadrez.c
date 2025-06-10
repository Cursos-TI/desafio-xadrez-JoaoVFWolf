#include <stdio.h>

int main(){

    //Movimento da Torre, 5 casas para a direita usando a estrutura for
    int i;
    
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    return 0;
}