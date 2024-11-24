//COM WHILE

#include <stdio.h>

int main() {
    
    int idade=1;
    
    printf("\n--------------------------\n");
    printf("Classificador de idades.");
    
    while(idade >= 0){
        
    printf("\nDigite sua idade: ou digite -1 para sair: ");
    scanf("%d", &idade);
    printf("\n---------------------------\n");
        
    
    if(idade>=65){
    printf("Idoso.");}
    
    else if(idade>=18){
    printf("Adulto.");}
    
    else if(idade>=13){
    printf("Adolescente.");}
    
    else{
    printf("Criança.");}
    
    printf("\n");
}
    return 0;
}