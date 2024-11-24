//QUAL NUMERO É O MAIOR

#include <stdio.h>

int main() {
    
    int numero1, numero2, numero3, maior;
    
    printf("\n------------------------\n");
    printf("Digite três numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    maior=numero1;
    
    if(numero2>maior){
        maior=numero2;
    }
    
    if(numero3>maior){
    maior=numero3;}
    
    printf("O maior numero é: %d", maior);
    
    return 0;
}