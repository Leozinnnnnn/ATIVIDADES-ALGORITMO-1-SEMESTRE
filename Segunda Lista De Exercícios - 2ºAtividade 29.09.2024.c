#include <stdio.h>

int main() {
    
    int numeros[3], maior, i;
    
    for(i=0; i<3; i++){
        printf("digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    maior = numeros[0];
    
    for(i=0; i<3; i++){
        if(numeros[i]>maior){
            maior = numeros[i];
        }
    }
    
    printf("O maior número é: %d", maior);
    
    return 0;
}