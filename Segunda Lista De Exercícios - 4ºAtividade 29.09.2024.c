#include <stdio.h>

int main() {
    
    int i=1, numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    while(i<=numero){
        printf("%d ", i);
        i++;
    }

    return 0;
}
