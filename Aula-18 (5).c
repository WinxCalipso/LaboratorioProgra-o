#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    do {
        printf("Digite um numero (0 a 12): ");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 12);

    printf("Fatorial de %d = %d\n", numero, calcularFatorial(numero));

    return 0;
}