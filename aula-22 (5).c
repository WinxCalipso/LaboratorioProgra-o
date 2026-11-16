#include <stdio.h>

int main(void) {
    int vet[5];
    int *ptr = vet;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nElementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}