#include <stdio.h>

int main() {
        int x, i;
             do {
                 printf("Digite o um valor maior que 0 (zero): ");
                 scanf("%d", &x);    
             } while (x <= 0);
    
            for (i = 0; i <= 10; i++) {
                    printf("%d * %d = %d\n", x, i, x * i); 
            }
    return 0;
}