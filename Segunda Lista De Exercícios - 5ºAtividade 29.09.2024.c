#include <stdio.h>

int main() {
    
    int i=2, soma=0;
    
    
    while(i<=100){
        soma += i;
        i+=2;
    }
    printf("O resultado da soma dos números pares até 100 é: %d", soma);

    return 0;
}
