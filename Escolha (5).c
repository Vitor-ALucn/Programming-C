#include <stdio.h>

int main() {
     char m;
     char g;
     char f;
    
    printf("Insira o genêro: M ou F");
    scanf(" %c", &g);
 
 switch (g){
 
 case 'M':
 printf("Genêro escolhido: Masculino.\n");
 case 'F':
 printf("Genêro escolhido: Feminino.\n");
 default:
 printf("Não indentificado.\n");
    }
    return 0;
}