#include <stdio.h>

int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += m[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma); // 45
    return 0;
}