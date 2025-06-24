#include <stdio.h>

int main() {
    
    int cm; 
    int vc;
    int desconto;
    
        printf("Insira o valor da compra ");
        scanf("%d", &vc);
        printf("Qual o cliente? 1 -> Comum; 2 -> Colarador; 3 -> VIP.");
        scanf("%d", &cm);

    switch(cm) {
      
      case 1:
      printf("Para essa compra não há desconto %d\n", vc);
        break;
    
      case 2:
      desconto = (vc * 10) / 100;
      printf("Esse compra com desconto é: %d\n",vc - desconto);
         break;
    
      case 3:
      desconto = (vc * 5) / 100;
      printf("Esse compra com desconto é %d\n: ",vc - desconto);
         break;
    
      default:
      printf("\nCliente não encontrado\n");

    }
    return 0;
}
