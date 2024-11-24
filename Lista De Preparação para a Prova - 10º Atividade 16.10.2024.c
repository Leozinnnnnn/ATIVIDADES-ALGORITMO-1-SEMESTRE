//UTILIZANDO APENAS 3 VARIAVEIS

#include <stdio.h>

int main() {
    
    int numero1, numero2, numero3;
    
    printf("\n------------------------\n");
    printf("Digite três numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    if(numero1>numero2){
       if(numero1>numero3)
          printf("O maior numero é: %d", numero1);
         
        else 
        printf("O maior numero é: %d", numero3);
    
    }  
    else if(numero2>numero3)
    printf("O maior numero é: %d", numero2);
    
    else
    printf("O maior numero é: %d", numero3);
    
    
    return 0;
}