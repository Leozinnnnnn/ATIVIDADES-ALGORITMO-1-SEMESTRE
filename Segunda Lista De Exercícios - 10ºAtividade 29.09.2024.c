#include <stdio.h>

int main() {
    
    int i, numero;
    float soma = 0.0, media;
    
    for(i=1; i<=10; i++){
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
        soma+=numero;
    }
    
    media = soma/10;
    
    printf("A média dos números é: %.2f", media);
    
    return 0;
}
