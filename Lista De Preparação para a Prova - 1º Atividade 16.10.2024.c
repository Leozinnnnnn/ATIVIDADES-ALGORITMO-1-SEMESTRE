#include <stdio.h>

int main() {
    
    int senhaAcesso, senha;
    
    printf("\n-----------------------\n");
    printf("Cadastro de senha do sistema. ");
    printf("Cadatre a sua senha: ");
    scanf("%d", &senhaAcesso);
    
    printf("\n-----------------------\n");
    printf("Acesso ao sistema. Digite a sua senha: ");
    scanf("%d", &senha);
    
    if(senhaAcesso==senha){
        printf("Senha Correta! Acesso Permitido!");}
    
    else{
        printf("Senha Errada! Acesso Negado!");}

    return 0;
}

