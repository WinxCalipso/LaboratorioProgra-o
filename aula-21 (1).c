#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    Funcionario lista[5];
    int qtd, i;

    printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
    scanf("%d", &qtd);
    if (qtd < 1) qtd = 1;
    if (qtd > 5) qtd = 5;

    for (i = 0; i < qtd; i++) {
        printf("Nome: ");
        scanf(" %49[^\n]", lista[i].nome);
        printf("Salario: ");
        scanf("%f", &lista[i].salario);
        printf("Horas extras: ");
        scanf("%d", &lista[i].horasExtras);
    }

    FILE *arq = fopen("funcionarios.txt", "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        fprintf(arq, "%49[^\n];%.2f;%d\n", lista[i].nome, lista[i].salario, lista[i].horasExtras);
    }

    fclose(arq);

    arq = fopen("funcionarios.txt", "r");
    if (arq == NULL) {
        printf("Erro ao ler o arquivo.\n");
        return 1;
    }

    Funcionario f;
    printf("\n--- FUNCIONARIOS CADASTRADOS ---\n");
    while (fscanf(arq, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: %.2f | Horas extras: %d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arq);

    return 0;
}