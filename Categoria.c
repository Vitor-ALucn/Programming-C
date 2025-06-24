#include <stdio.h>
    const char* categoria(int idade){
    if (idade >= 5 && idade <= 7)
     return "Infantil A";
    else if (idade >= 8 && idade <= 10)
     return "Infantil B";
    else if (idade >= 11 && idade <= 13)
     return "Juvenil A";
    else if (idade >= 14 && idade <= 17)
     return "Juvenil B";
    else if (idade == 18)
     return "Aldulto";
    else
     return "Idade Inválida";    
    }

    int main() {
    int idd;

    printf("Digite a idade:\n");
    scanf("%d", &idd);

    const char* resposta = categoria(idd);
    printf("A categoria é: %s\n", resposta);

    return 0;
    }     