#include <stdio.h>

int main(void) {
    int numeros[5];
    int i, num;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    FILE *arq = fopen("numeros.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        fprintf(arq, "%d\n", numeros[i]);
    }

    fclose(arq);

    arq = fopen("numeros.txt", "r");
    if (arq == NULL) {
        printf("Erro ao ler o arquivo.\n");
        return 1;
    }

    printf("\nNumeros armazenados:\n");
    while (fscanf(arq, "%d", &num) == 1) {
        printf("%d\n", num);
    }

    fclose(arq);

    return 0;
}