#include <stdio.h>

int main() {
    double vc, desconto;
    int parcelas;
    char opcao;

    do {
        printf("\n--- Sistema de Compras com Desconto ---\n");
        printf("Insira o valor da compra: R$ ");
        scanf("%lf", &vc);

        printf("\nEscolha a forma de pagamento:\n");
        printf("1 - À vista (30%% de desconto)\n");
        printf("2 - 2x (20%% de desconto)\n");
        printf("3 - 3x (10%% de desconto)\n");
        printf("4 ou mais - Sem desconto\n");
        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &parcelas);

        switch (parcelas) {
            case 1:
                desconto = (vc * 30) / 100;
                printf("Valor final com 30%% de desconto: R$ %.2lf\n", vc - desconto);
                break;

            case 2:
                desconto = (vc * 20) / 100;
                printf("Valor final com 20%% de desconto: R$ %.2lf\n", vc - desconto);
                break;

            case 3:
                desconto = (vc * 10) / 100;
                printf("Valor final com 10%% de desconto: R$ %.2lf\n", vc - desconto);
                break;

            default:
                printf("Sem desconto. Valor total: R$ %.2lf\n", vc);
                break;
        }

        // Pergunta se o usuário deseja fazer outra operação
        printf("\nDeseja realizar outra compra? (S/N): ");
        scanf(" %c", &opcao); // espaço antes do %c evita problemas com ENTER

    } while (opcao == 'S' || opcao == 's');

    printf("\nObrigado por usar nosso sistema!\n");

    return 0;
}