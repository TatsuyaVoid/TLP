#include<iostream>
#include<fstream>
#include<locale.h>
#include<string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	string name;
	ofstream write("names.txt");
	cout << "Porfavor diga qual é o seu nome: \n";
	getline(cin, name);
	write << "\nSeu nome foi definido como " << name << ", e será armazenado num ficheiro de texto.\n";
	write.close();
	ifstream scan("names.txt");
	while (getline(scan,name)) {
		write << name;
	}
	scan.close();
}