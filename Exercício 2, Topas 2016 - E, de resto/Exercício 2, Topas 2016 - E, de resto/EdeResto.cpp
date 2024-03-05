#include<iostream>
#include<algorithm>
#include<locale.h>
using namespace std;
int apostas[100], i, j;
void verificaAposta(int jogadores, int soma) {
	if (apostas[j] > jogadores) {
		cout << "[ Aposta invalida! Menor ou igual ao n�mero de jogadores! ]\n";
		cin >> apostas[j];
	}
	else{
		soma += apostas[j];
	}
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int jogadores, jogadas, pontua��o[100], op��o, soma = 0, maiorpontos;
	do {
		cout << "======== E, de resto? ========\n1-Jogar\n0-Sair\n";
		cin >> op��o;
		switch (op��o) {
		case 1: {
			cout << "Quantos jogadores? (100 max.)\n";
			cin >> jogadores;
			cout << "Quantos jogadas? (100 max.)\n";
			cin >> jogadas;
			if (jogadores > 100 || jogadas > 100) {
				cout << "O m�ximo � 100...";
				break;
			}
			for (i = 0; i < 100; i++) {
				pontua��o[i] = 0;
			}
			for (j = 0; j < jogadas; j++) {
				for (i = 0; i < jogadores; i++) {
					cout << "Jogador " << i + 1 << ", fa�a sua " << j + 1 << "� aposta: ";
					cin >> apostas[j];
					verificaAposta(jogadores, soma);
				}
			}
			for (j = 0; j < jogadas; j++) {
				for (i = 0; i < jogadores; i++) {
					if (soma % jogadas == apostas[j]) {
						pontua��o[i]++;
					}
				}
			}
			sort(pontua��o, pontua��o + jogadores);
			cout << "Pontua��es do menor para o maior:\n";
			for (i = 0; i < jogadores; i++) {
				cout << "Jogador " << i + 1 << ": " << pontua��o[i] << "\n";
			}
			maiorpontos = pontua��o[jogadores - 1];
			for (i = 0; i < jogadores; i++) {
				if (pontua��o[i] == maiorpontos) {
					cout << "Jogador " << i + 1 << " teve a maior pontua��o: " << maiorpontos << " pontos\n";
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
	} while (op��o != 0);
}