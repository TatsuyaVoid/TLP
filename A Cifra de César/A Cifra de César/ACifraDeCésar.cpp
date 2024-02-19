		#include<iostream>
		#include<locale.h>
		#include<string>
		using namespace std;
		void main() {
			setlocale(LC_ALL, "Portuguese");
			string frase, encriptado;
			int codigo, i, j;
			for ( i = 0; i < 26; i++){
			string abecedario[26] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
			}
			cout << "Diga uma frase para ser encriptada: ";
			getline(cin, frase);
			cout << "Diz um número para encriptar o teu texto: ";
			cin >> codigo;
			for (i = 0; i < frase.size(); i++) {
				
			}	
			cout << "Texto encriptado: " << encriptado << "\n";
		}