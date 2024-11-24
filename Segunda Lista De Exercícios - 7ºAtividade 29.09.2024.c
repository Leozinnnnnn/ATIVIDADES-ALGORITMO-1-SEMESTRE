#include <stdio.h>

int main() {
    
    int i=0, numero;
    float soma =0.0, media;
    
    while(i<5){
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numero);
        soma += numero;
        i++;
    }
    
    media = soma/5;
    
    printf("A média é: %.2f", media);

    return 0;
}
