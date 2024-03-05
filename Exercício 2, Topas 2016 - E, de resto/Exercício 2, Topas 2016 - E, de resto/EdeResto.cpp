#include<iostream>
#include<algorithm>
#include<locale.h>
using namespace std;
int apostas[100], i, j;
void verificaAposta(int jogadores, int soma) {
	if (apostas[j] > jogadores) {
		cout << "[ Aposta invalida! Menor ou igual ao número de jogadores! ]\n";
		cin >> apostas[j];
	}
	else{
		soma += apostas[j];
	}
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int jogadores, jogadas, pontuação[100], opção, soma = 0, maiorpontos;
	do {
		cout << "======== E, de resto? ========\n1-Jogar\n0-Sair\n";
		cin >> opção;
		switch (opção) {
		case 1: {
			cout << "Quantos jogadores? (100 max.)\n";
			cin >> jogadores;
			cout << "Quantos jogadas? (100 max.)\n";
			cin >> jogadas;
			if (jogadores > 100 || jogadas > 100) {
				cout << "O máximo é 100...";
				break;
			}
			for (i = 0; i < 100; i++) {
				pontuação[i] = 0;
			}
			for (j = 0; j < jogadas; j++) {
				for (i = 0; i < jogadores; i++) {
					cout << "Jogador " << i + 1 << ", faça sua " << j + 1 << "ª aposta: ";
					cin >> apostas[j];
					verificaAposta(jogadores, soma);
				}
			}
			for (j = 0; j < jogadas; j++) {
				for (i = 0; i < jogadores; i++) {
					if (soma % jogadas == apostas[j]) {
						pontuação[i]++;
					}
				}
			}
			sort(pontuação, pontuação + jogadores);
			cout << "Pontuações do menor para o maior:\n";
			for (i = 0; i < jogadores; i++) {
				cout << "Jogador " << i + 1 << ": " << pontuação[i] << "\n";
			}
			maiorpontos = pontuação[jogadores - 1];
			for (i = 0; i < jogadores; i++) {
				if (pontuação[i] == maiorpontos) {
					cout << "Jogador " << i + 1 << " teve a maior pontuação: " << maiorpontos << " pontos\n";
					break;
				}
				break;
			}
		case 0: {
			cout << "Encerrando...\n";
			break;
		}
		default:
			break;
		}
		}
	} while (opção != 0);
}