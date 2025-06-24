#include <stdio.h>

int main() {
    int numero, i;
        printf("Digite um número entre 0 e 100: ");
        scanf("%d", &numero);

                if (numero % 2 != 0) {
                    numero = numero + 1;    
                } for (i = numero; i <= 100; i = i +2) {
                    printf("%d ", i);               
                  
                }
   return 0;
}