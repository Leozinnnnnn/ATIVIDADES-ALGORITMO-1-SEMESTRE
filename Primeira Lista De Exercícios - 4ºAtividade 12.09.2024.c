#include <stdio.h>

int main() {
    
    float nota1, nota2, nota3, media;
    int i, permanencia;
    
    for(;;){
    printf("Digite 1 para inserir as notas:\n");
    printf("Digite 0 para sair:\n");
    scanf("%d", &permanencia);
    if(permanencia==0)
    break;
    
    printf("Digite as suas 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    
    if(media>=7){
        printf("Aluno Aprovado!\n");
    }
    
    else if(media>=4){
        printf("Aluno De Recuperação!\n");
    }
    
    else{
        printf("Aluno Reprovado!\n");
    }
}

    return 0;
}
