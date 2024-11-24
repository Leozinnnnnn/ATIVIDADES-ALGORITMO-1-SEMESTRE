#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Você é uma criança!\n");}
        
        else if (idade >= 13 && idade <= 17) {
        printf("Você é um adolescente!\n");}
        
        else if (idade >= 18 && idade <= 59) {
        printf("Você é um adulto!\n");}
        
        else {
        printf("Você é um idoso!\n");
    }

    return 0;
}
