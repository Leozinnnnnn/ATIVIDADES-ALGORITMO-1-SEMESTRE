#include <stdio.h>

int main() {
    
   int num1, num2;
   
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
   
   if(num1==num2){
       printf("Os valores são iguais.");
   }
   
   else if(num1>num2){
       printf("O maior número é: %d", num1);
   }
   
   else{
       printf("O maior número é: %d", num2);
   }
    return 0;
}
