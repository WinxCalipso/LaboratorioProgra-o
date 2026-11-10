#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (verificarPar(numero) == 1) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}