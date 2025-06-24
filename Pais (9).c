#include <stdio.h>

int main() {
    float vm;        // valor da mercadoria
    float vf;        // valor final com acréscimo
    int pais;        // código do país

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &vm);

    printf("\nPaís de origem:\n");
    printf("1 -> EUA\n");
    printf("2 -> França\n");
    printf("3 -> México\n");
    printf("4 -> Argentina\n");
    printf("5 -> China\n");
    printf("Digite o número correspondente ao país: ");
    scanf("%d", &pais); 

    switch (pais) {
        case 1:
            vf = vm + 60;
            printf("Vindo dos EUA: R$ %.2f\n", vf);
            break;

        case 2:
            vf = vm + 75.50;
            printf("Vindo da França: R$ %.2f\n", vf);
            break;

        case 3:
            vf = vm + 50;
            printf("Vindo do México: R$ %.2f\n", vf);
            break;

        case 4:
            vf = vm + 27.35;
            printf("Vindo da Argentina: R$ %.2f\n", vf);
            break;

        case 5:
            vf = vm + 80;
            printf("Vindo da China: R$ %.2f\n", vf);
            break;

        default:
            printf("País não encontrado!\n");
            break;
    }

    return 0;
}