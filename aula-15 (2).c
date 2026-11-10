#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j, soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma);
    return 0;
}