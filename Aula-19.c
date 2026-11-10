#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 5

float calcular_pontuacao(float dados[]) {
	float pontuacao = 0;

	if (dados[0] > 45) pontuacao += 2;
	if (dados[1] >= 140) pontuacao += 3;
	else if (dados[1] >= 130) pontuacao += 2;

	if (dados[2] == 1) pontuacao += 3;
	if (dados[3] == 1) pontuacao += 3;
	if (dados[4] == 1) pontuacao += 4;
	if (dados[5] == 1) pontuacao += 2;

	float imc = dados[6] / (dados[7] * dados[7]);
	if (imc >= 30) pontuacao += 2;
	else if (imc >= 25) pontuacao += 1;

	if (dados[8] == 1) pontuacao += 1;
	if (dados[9] == 1) pontuacao += 1;
	if (dados[10] == 1) pontuacao += 1;
	if (dados[11] == 1) pontuacao += 1;
	if (dados[12] == 1) pontuacao += 1;

	return pontuacao;
}

void apresentar_classificacao(char nome[], float pontuacao) {
	printf("\nPaciente: %s\n", nome);
	printf("Pontuacao Total: %.1f\n", pontuacao);
	printf("Classificacao de Risco: ");
	if (pontuacao < 5) {
		printf("Baixo Risco\n");
	} else if (pontuacao <= 10) {
		printf("Medio Risco\n");
	} else {
		printf("Alto Risco\n");
	}
}

int main() {
	// Exemplo de teste para reproduzir a saida da consola
	char nome[50] = "1";
	float dados[13] = {50, 140, 1, 1, 1, 1, 90, 1.70, 1, 1, 1, 1, 1};

	float total = calcular_pontuacao(dados);
	apresentar_classificacao(nome, total);

	return 0;
}