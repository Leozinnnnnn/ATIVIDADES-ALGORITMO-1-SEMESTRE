//CLASSIFICADDOR DE IDADE

#include <stdio.h>

int main() {
    
    int idade;
    
    printf("\n--------------------------\n");
    printf("Classificador de idades.");
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);
    
    printf("\n---------------------------\n");
    
    if(idade>=65)
    printf("Idoso.");
    
    else if(idade>=18)
    printf("Adulto.");
    
    else if(idade>=13)
    printf("Adolescente.");
    
    else
    printf("Criança.");

    return 0;
}