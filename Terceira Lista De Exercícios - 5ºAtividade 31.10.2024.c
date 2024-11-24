#include <stdio.h>

int main() {
    
   int i=0, n, soma=0;
   
   printf("Digite um número inteiro: ");
   scanf("%d", &n);
   
   printf("Os números pares são: ");
   while(i<=n){
       if(i%2==0){
           soma+=i;
           printf("%d ", i);
       }
       i++;
   }
   
   printf("\nA soma dos números pares é: %d", soma);
   
    return 0;
}
