#include <stdio.h>

int main(void) {
    int num = 20;
    int *ptr = &num;

    printf("Valor da variavel: %d\n", num);
    printf("Endereco de memoria: %p\n", (void *)ptr);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);

    return 0;
}