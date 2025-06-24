#include <stdio.h>

int main() {
    int numero, quantidade;
    float soma, media;

    soma = 0;
    quantidade = 0;

    printf("Insira um número maior que 0 (ou 0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0) {
            soma = soma + numero;
            quantidade = quantidade + 1;
        } else {
            printf("Número inválido. Digite apenas números positivos.\n");
        }

        printf("Insira um número maior que 0 (ou 0 para encerrar): ");
        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Quantidade de números digitados: %d\n", quantidade);
        printf("Média dos números: %.2f\n", media);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}