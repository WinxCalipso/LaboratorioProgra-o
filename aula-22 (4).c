#include <stdio.h>

void dobrar(int *n) {
    *n = (*n) * 2;
}

int main(void) {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    dobrar(&num);

    printf("Resultado: %d\n", num);

    return 0;
}