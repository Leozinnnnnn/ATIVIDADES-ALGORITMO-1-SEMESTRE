#include <stdio.h>

int main() {
    
    int numero, i;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    for(i=2; i<=numero; i+=2){
        printf("%d\n", i);
    }

    return 0;
}
