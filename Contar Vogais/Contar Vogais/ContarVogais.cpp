#include<iostream>
#include<string>
#include<locale.h>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int n, i,p=0, contarA=0, contarE=0, contarI=0, contarO=0, contarU=0;
	string texto;
	do
	{
	cout << "Pressione 0 para sair " << "\n" << "Pressione 1 para contar as Vogais" << "\n";
	cin >> n;
	switch (n)
	{
	case (0):
	{
		cout << "Encerrando";
		break;
	}
	case (1):
	{
		cout << "\nEscreva alguma palavra ou frase: ";
		cin.ignore();
		getline(cin, texto);
		for (i = 0; i < texto.size(); i++)
		{
			p = p + 1;
		switch (texto[i])
		{
		case 'a':
		case 'A':	
			contarA = contarA + 1;
			break;
		case 'e':
		case 'E':
			contarE = contarE + 1;
			break;
		case 'i':
		case 'I':
			contarI = contarI + 1;
			break;
		case 'O':
		case 'o':
			contarO = contarO + 1;
			break;
		case 'U':
		case 'u':
			contarU = contarU + 1;
			break;
		default:
			break;
		}
		}
		cout << "Um total de " << p << " letras \n" << "Possuí " << contarA << " A's , " << contarE << " E's , " << contarI << " I's , " << contarO << " O's, " << contarU << " U's .";
	}
	default:
		break;	
	}
	cout << "\n------------------------------------ \n";
	} while (n != 0);
}     