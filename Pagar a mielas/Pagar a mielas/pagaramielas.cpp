#include<iostream>
#include<locale.h>
using namespace std;
void PagandoEmMielas(int &despesa, int &pessoas) {
	despesa /= pessoas;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int despesa, pessoas;
	cout << "====== PAGAR A MIELAS ======\nQual o valor da despesa? ";
	cin >> despesa;
	cout << "Qual o número de pessoas? ";
	cin >> pessoas;
	PagandoEmMielas(despesa, pessoas);
	cout << "Cada pessoa vai ter de pagar " << despesa << " euros";
}