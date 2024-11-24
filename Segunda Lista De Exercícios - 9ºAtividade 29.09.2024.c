#include <stdio.h>

int main() {
    
    int soma=0, i;
    
    for(i=2; i<=100; i+=2){
        soma+=i;
    }
    printf("O resultado da soma é: %d", soma);

    return 0;
}
