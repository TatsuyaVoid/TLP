#include <iostream>
#include <locale.h>
#include<time.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int numero, resposta;
	srand(time(0));
	resposta = rand() % 99 + 1;	  
	cout << "Jogo adivinha, tente adivinhar o n�mero secreto\n-------------\n";
	do{
	  cout << "Diga um n�mero:\n";
	  cin >> numero;
	  if (numero < resposta){
		  cout << "O n�mero que escolheste � inferior ao n�mero correto\n";
	  }
	  else if (numero > resposta) {
		 cout << "O n�mero que escolheste � superior ao n�mero correto\n";
	  }
	} while (numero != resposta);
	cout << "Acertaste! o n�mero correto era " << resposta << ".";
}