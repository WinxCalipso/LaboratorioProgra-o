#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' que o fgets guarda
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome completo: %s\n", nome);

    return 0;
}