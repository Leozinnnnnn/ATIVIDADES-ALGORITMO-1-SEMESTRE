#include <stdio.h>

int main() {
    
   int num1, num2, num3, num4;
   float media;
   
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);
   
   printf("Digite o segundo número: ");
   scanf("%d", &num2);
   
   printf("Digite o terceiro número: ");
   scanf("%d", &num3);
   
   printf("Digite o quarto número: ");
   scanf("%d", &num4);
   
   media = (num1 + num2 + num3 + num4)/4;
   
   printf("A média final é: %.2f", media);
   
   if(media>=6){
       printf("\nAprovado");
   }
   
   else{
       printf("\nReprovado");
   }
   
    return 0;
}
