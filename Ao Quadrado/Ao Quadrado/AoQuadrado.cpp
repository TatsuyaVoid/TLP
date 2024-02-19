#include<iostream>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n, expoente, resultado=1, i;
	cout << "====== Ao Quadrado ======\nDiz um número: ";
	cin >> n;
	cout << "Diz o expoente desse número: ";
	cin >> expoente;
	for ( i = 0; i < expoente; i++){
		resultado *= n;
	}
	cout << n << "^" << expoente << " é igual a " << resultado;
}