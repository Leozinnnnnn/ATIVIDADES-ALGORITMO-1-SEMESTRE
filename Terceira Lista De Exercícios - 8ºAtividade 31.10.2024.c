#include <stdio.h>

int main() {
    int lado, i, j;

    printf("Digite o tamanho que você deseja que o quadrado tenha: ");
    scanf("%d", &lado);

    for (i = 0; i < lado; i++) {      
        for (j = 0; j < lado; j++) { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
