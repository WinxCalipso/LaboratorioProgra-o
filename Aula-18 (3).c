#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicial;

    printf("Quantidade inicial: ");
    scanf("%d", &inicial);

    printf("Quantidade apos duplicacao: %d\n", dobro(inicial));

    return 0;
}