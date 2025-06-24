#include <stdio.h>

int main() {
    float pn, sn, resultado;
    int op;

    printf("Insira o primeiro número: ");
    scanf("%f", &pn);

    printf("Insira o segundo número: ");
    scanf("%f", &sn);

    printf("\nEscolha a operação: 1 -> Média; 2 -> Diferença; 3 -> Produto; 4 -> Divisão.\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            resultado = (pn + sn) / 2;
            printf("A média é: %.2f\n", resultado);
            break;

        case 2:
            resultado = pn - sn;
            printf("A diferença é: %.2f\n", resultado);
            break;

        case 3:
            resultado = pn * sn;
            printf("O produto é: %.2f\n", resultado);
            break;

        case 4:
            if (sn != 0) {
                resultado = pn / sn;
                printf("A divisão é: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;

        default:
            printf("Operação não encontrada.\n");
            break;
    }

    return 0;























    
    return 0;
}