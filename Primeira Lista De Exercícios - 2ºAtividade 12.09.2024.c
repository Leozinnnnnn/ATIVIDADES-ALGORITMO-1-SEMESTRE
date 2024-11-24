#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = 18;
    int sorteado, tentativas = 0;

    printf("Adivinhe o número entre 1 e 50:\n");

    while (tentativas < 3) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &sorteado);

        if (sorteado == numero) {
            printf("Parabéns! Você acertou!");
            break;}
            
            else if (sorteado > numero) {
            printf("Muito alto!\n");}
            
            else {
            printf("Muito baixo!\n");
        }

        tentativas++;
    }

    if (sorteado != numero) {
        printf("Você perdeu! O número sorteado era %d.\n", numero);
    }

    return 0;
}
