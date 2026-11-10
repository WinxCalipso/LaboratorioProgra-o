#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copia[50];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso: ");
    scanf("%9s", codigo);

    strcpy(copia, nome);
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nome);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else {
        printf("Curso: Sistemas de Informacao\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));
    printf("\n%s\n", mensagem);

    return 0;
}