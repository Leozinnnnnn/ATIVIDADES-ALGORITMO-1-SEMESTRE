#include <stdio.h>

int main() {
    
    int n, senha=2967;
    
    printf("Digite a sua senha de 4 números: ");
    scanf("%d", &n);
    
    if(n==senha){
        printf("Senha Correta! Acesso Permitido.");
    }
    
    else{
        printf("Senha Incorreta! Acesso Negado.");
    }

    return 0;
}
