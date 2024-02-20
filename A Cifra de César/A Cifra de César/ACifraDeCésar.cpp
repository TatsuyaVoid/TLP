#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "portuguese");
	int codigo, i, j;
	char caracter, base;
	string frase, abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Escreve a frase: ";
	getline(cin, frase);
	cout << "Quanto deslocamento queres efetuar: ";
	cin >> codigo;
	for (i = 0; i < frase.size(); i++) {
		caracter = frase[i];
		if (isalpha(caracter) && isupper(caracter)) {
			j = caracter - 'A';
			j = (j + codigo) % 26;
			if (j < 0) {
				j += 26;
			}
			cout << abecedario[j];
		}
		else {
			cout << caracter;
		}
	}
}
