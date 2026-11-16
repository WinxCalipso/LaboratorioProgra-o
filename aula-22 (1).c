#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Valor: %d\n", num);
    printf("Endereco de memoria: %p\n", (void *)&num);

    return 0;
}