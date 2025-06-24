#include <stdio.h>

int main() {
    int md; 

    printf("Insira a média do aluno: ");
    scanf("%d", &md);  
    switch (md) {

      case 0:
      printf("F");
      break;
          
      case 1:
      printf("F");
      break;
        
      case 2:
      printf("F");
      break;
        
      case 3:
      printf("F");
      break;
        
      case 4:
      printf("F");
      break;
        
      case 5:
      printf("E");
      break;
        
      case 6:
      printf("D");
      break;
        
      case 7:
      printf("C");
      break;
        
      case 8:
      printf("B");
      break;
        
      case 9:
      printf("A");
      break;
          
      case 10:
      printf("A+");
      break;
          
      default:
      printf("Média inválida!");
    }
    return 0;
}