#include<iostream>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n, expoente, resultado=1, i;
	cout << "====== Ao Quadrado ======\nDiz um n�mero: ";
	cin >> n;
	cout << "Diz o expoente desse n�mero: ";
	cin >> expoente;
	for ( i = 0; i < expoente; i++){
		resultado *= n;
	}
	cout << n << "^" << expoente << " � igual a " << resultado;
}