#include <stdio.h>

void MaiorMenor() {
    int valor, maior, menor, i;

   printf("Digite 5 valores inteiros:\n");

   // Inicializando as variáveis de maior e menor
   scanf("%d", &valor);
    
   maior = menor = valor;
   
   for(i = 2; i <= 5; i++) {
      scanf("%d", &valor);
      
       if (valor > maior) {
         maior = valor;
    }  if (valor < menor) {  
         menor = valor;
       }
   }
   printf("O maior valor é: %d\n", maior);
   printf("O menor valor é: %d\n", menor);
   
}

int main() {
    MaiorMenor();
    return 0;
}