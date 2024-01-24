#include <iostream>
#include <locale.h>
#include<time.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int numero, resposta;
	srand(time(0));
	resposta = rand() % 99 + 1;	  
	cout << "Jogo adivinha, tente adivinhar o número secreto\n-------------\n";
	do{
	  cout << "Diga um número:\n";
	  cin >> numero;
	  if (numero < resposta){
		  cout << "O número que escolheste é inferior ao número correto\n";
	  }
	  else if (numero > resposta) {
		 cout << "O número que escolheste é superior ao número correto\n";
	  }
	} while (numero != resposta);
	cout << "Acertaste! o número correto era " << resposta << ".";
}