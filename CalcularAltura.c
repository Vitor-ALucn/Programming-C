#include <stdio.h>
    float calcularPesomasculino (float altura) {
        float peso;
        peso = 72.7 * altura - 58;
    return peso;        
    }
    float calcularPesofeminino (float altura) {
        float peso;
        peso = 72.7 * altura - 44.7;
    return peso;        
    }
int main () {
    float altM, altF;
    float pesoidealM, pesoidealF;

    printf("Digite a altura do homem (em metros): ");
    scanf("%f", &altM);

    printf("Digite a altura da mulher (em metros): ");
    scanf("%f", &altF);

    pesoidealM = calcularPesomasculino(altM);
    pesoidealF = calcularPesofeminino(altF);

    printf("O peso ideal para o homem é: %.2f", pesoidealM);
    printf("O peso ideal para a mulher é: %.2f", pesoidealF);

    return 0;
}    