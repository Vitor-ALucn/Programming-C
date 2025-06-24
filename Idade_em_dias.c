#include <stdio.h>
    int idade (int a, int m, int d) {
        int id;
        id = a * 365 + m * 31 + d;
    return id;
}
int main() {
  int ano, mes, dia, resposta;
    
    printf("Digite a quantidade de anos:\n");
     scanf("%d", &ano);
    printf("Digite a quantidade de meses:\n");
     scanf("%d", &mes);
    printf("Digite a quantidade de dias:\n");
     scanf("%d", &dia);
    
    resposta = idade(ano, mes, dia);
    
    printf("A idade em dias é %d: ", resposta);  
}