//COM WHILE

#include <stdio.h>

int main() {
    
    int senhaAcesso, senha;
    
    printf("\n-----------------------\n");
    printf("Cadastro de senha do sistema. ");
    printf("Cadastre a sua senha: ");
    scanf("%d", &senhaAcesso);
    
    printf("\n-----------------------\n");
    printf("Acesso ao sistema. Digite a sua senha: ");
    scanf("%d", &senha);
    
    while(senhaAcesso!=senha){
        printf("Senha Incorreta! Acesso negado");
        printf("\nDigite sua senha novamente: ");
        scanf("%d", &senha);
    }
    
    printf("Senha correta!Acesso perimitido");

    return 0;
}