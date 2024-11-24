#include <stdio.h>

int main() {
    int numero_escolhido = 42, tentativa;

    printf("Adivinhe o número secreto (entre 1 e 100): ");
    scanf("%d", &tentativa);

    while (tentativa != numero_escolhido) {
        if (tentativa < numero_escolhido) {
            printf("Muito baixo, tente novamente: ");}
            
            else {
            printf("Muito alto, tente novamente: ");}
            
        scanf("%d", &tentativa);
    }

    printf("Parabéns! Você acertou!\n");

    return 0;
}