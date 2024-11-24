//CALCULO DE MEDIAS COM FOR

#include <stdio.h>

int main() {
    
    float nota1, nota2, nota3, media=0;
    int i=1;
    
    printf("\n--------------------------\n");
    printf("CALCULO DE MEDIA.");
    
    for(;i>0;){
        
    printf("\nDigite a nota 1,2 e 3: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("\n---------------------------\n");
    
    media=(nota1+nota2+nota3)/3;    
    
    if(media>=7){
    printf("Aprovado.");}
    
    else if(media>=4){
    printf("Recuperação.");}
    
    else{
    printf("Reprovado.");}
    
    printf("\n");
    printf("Digite 1 para continuar ou -1 para sair: ");
    scanf("%d", &i);
}
    return 0;
}