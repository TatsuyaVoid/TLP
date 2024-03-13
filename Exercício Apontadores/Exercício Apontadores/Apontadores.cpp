#include<iostream>
#include<string>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	string comida = "Pizza";
	string* n = &comida;
	cout << comida << "\n";
	cout << &comida << "\n";
	cout << n << "\n";
	*n = "Sushi";
	cout << *n;
}