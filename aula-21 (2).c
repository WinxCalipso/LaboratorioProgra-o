#include <stdio.h>

int main(void) {
    char nomes[5][100];
    int matriculas[5];
    int qtd, i;

    printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
    scanf("%d", &qtd);
    if (qtd < 1) qtd = 1;
    if (qtd > 5) qtd = 5;

    for (i = 0; i < qtd; i++) {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf(" %99[^\n]", nomes[i]);
        printf("Digite a matricula do funcionario %d: ", i + 1);
        scanf("%d", &matriculas[i]);
    }

    FILE *arq = fopen("funcionarios.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < qtd; i++) {
        fprintf(arq, "%s;%d\n", nomes[i], matriculas[i]);
    }

    fclose(arq);
    printf("Dados gravados com sucesso em funcionarios.txt.\n");

    return 0;
}