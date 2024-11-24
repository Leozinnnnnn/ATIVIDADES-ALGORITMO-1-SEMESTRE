//COM FOR

#include <stdio.h>

int main() {
    
    int senhaAcesso, senha;
    
    printf("-----------------------\n");
    printf("Cadastro de senha do sistema. ");
    printf("\nCadastre a sua senha: ");
    scanf("%d", &senhaAcesso);
    
    printf("\n-----------------------\n");
    printf("Acesso ao sistema. Digite a sua senha: ");
    scanf("%d", &senha);
    
    for(;;){
        
        if(senhaAcesso==senha){
            printf("\nSenha Correta! Acesso permitido");
            break;
            
        }
        printf("Senha Incorreta! Acesso negado ");
        printf("\nDigite sua senha novamente: ");
        scanf("%d", &senha);
    }

    return 0;
}