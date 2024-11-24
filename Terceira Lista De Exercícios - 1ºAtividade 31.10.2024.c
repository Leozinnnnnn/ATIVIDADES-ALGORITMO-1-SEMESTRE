#include <stdio.h>

int main() {
    
    int i, n, soma=0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        soma+=i;
    }
    
    printf("O somatório do número %d é: %d", n,soma);
    
    return 0;
}
