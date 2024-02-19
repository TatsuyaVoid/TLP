#include<iostream>
#include<string>
#include<locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	const string letrasalfa[26] = { "A,B,C,D,E,F,G,H,I,J,K,L,M,N,P,Q,R,S,T,U,V,W,X,Y,Z" };
	string palavra, anagrama;
	int i=0,contador=0;
		cout << "Diga a " << i + 1 << "º palavra: ";
		cin >> palavra;
		cout << "Diga o anagrama da ultima palavra ou outra palavra nova: ";
		cin >> anagrama;
		if (palavra.size() != anagrama.size()) {
			cout << "As palavras não são anagramas.\n";
		}
		for (i = 0; i < anagrama.size(); i++) {
			contador++;
		}
}