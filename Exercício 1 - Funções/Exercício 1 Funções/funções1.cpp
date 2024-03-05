#include<iostream>
#include<locale.h>
using namespace std;
void CalcularMedia(const int n[], const int tamanho) {
	int soma = 0, i;
	for (i = 0; i < tamanho; i++) {
		soma += n[i];
	}
	float media = soma / tamanho;
	cout << "A média dos 10 números é de " << media << "\n";
}
void AcharMenor(const int n[], const int tamanho) {
	int menor = n[0], i;
	for (i = 0; i < tamanho; i++) {
		if (n[i] < menor) {
			menor = n[i];
		}
	}
	cout << "O menor número é: " << menor << "\n";
}
void AcharMaior(const int n[], const int tamanho) {
	int maior = n[0], i;
	for (i = 0; i < tamanho; i++) {
		if (n[i] > maior) {
			maior = n[i];
		}
	}
	cout << "O maior número é: " << maior << "\n";
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n[10], i, escolha, tamanho, menor, maior;
	cout << "Com quantos números deseja calcular?\n";
	cin >> tamanho;
	for (i = 0; i < tamanho; i++) {
		cout << "Diga o " << i + 1 << "º número: ";
		cin >> n[i];
	}
	cout << "========= MENU =========\n1-Calcular a média dos números\n2-Achar o menor\n3-Achar o maior\n0-Sair\n";
	cin >> escolha;
	switch (escolha) {
	case 1: {
		CalcularMedia(n, tamanho);
		break;
	}
	case 2: {
		AcharMenor(n, tamanho);
		break;
	}
	case 3: {
		AcharMaior(n, tamanho);
		break;
	}
	case 0: {
		std::cout << "Encerrando o programa...\n";
		break;
	}
	default:
		std::cout << "Escolha inválida.\n";
		break;
	}
}