#include <stdio.h>

int main() {
    int x, i, fat;
        printf("Digite um valor ");
        scanf("%d", &x);

    fat = 1;
    i = 1;

        while (i <= x) {
            fat = fat * i;
            i = i + 1;    
            }
        printf("O fatorial de %d é %d.\n", x, fat);

    return 0;
}