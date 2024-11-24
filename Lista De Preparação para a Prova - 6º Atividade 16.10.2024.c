//OUTRA MANEIRA DE FAZER SEM LAÇO

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
    
    else if(idade>=18 && idade<=64)
    printf("Adulto.");
    
    else if(idade>=13 && idade<=17)
    printf("Adolescente.");
    
    else
    printf("Criança.");

    return 0;
}