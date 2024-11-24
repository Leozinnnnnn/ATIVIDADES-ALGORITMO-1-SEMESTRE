#include <stdio.h>

int main() {
    
    int numeros[3], menor, i;
    
    for(i=0; i<3; i++){
        printf("digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    menor = numeros[0];
    
    for(i=0; i<3; i++){
        if(numeros[i]<menor){
            menor = numeros[i];
        }
    }
    
    printf("O menor número é: %d", menor);
    
    return 0;
}