#include <stdio.h>

float maiorPreco(float a, float b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main(void) {
    float preco1, preco2;

    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os precos sao iguais.\n");
    } else {
        printf("Maior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}