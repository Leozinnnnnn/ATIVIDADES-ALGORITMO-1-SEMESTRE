/*soma, maior, números pares, leitura e impressão*/
#include <stdio.h>

int main() {
    int v[10], i, maior, soma = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }

    maior = v[0];

    printf("\nElementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", v[i]);
        
        if (v[i] > maior) {
            maior = v[i];
        }

        soma += v[i];
    }

    printf("\nMaior valor: %d", maior);
    printf("\nSoma dos elementos: %d", soma);

    printf("\nNúmeros pares no vetor:");
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            printf("\n%d", v[i]);
        }
    }

    return 0;
}
