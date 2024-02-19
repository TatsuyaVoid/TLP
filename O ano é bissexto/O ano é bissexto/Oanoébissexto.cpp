#include<iostream>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int ano;
	cout << "O ano é Bissexto? 0 - Sair\n";
	do {
		cout << "Diga um ano: ";
		cin >> ano;
		if (ano % 400 == 0) {
			cout << "É um ano bissexto.\n";
		}
		else if ((ano % 4 == 0) && (ano % 100 != 0)) {
			cout << "É um ano bissexto.\n";
		}
		else {
			cout << "Não é um ano bissexto.\n";
		}
	} while (ano != 0);
}