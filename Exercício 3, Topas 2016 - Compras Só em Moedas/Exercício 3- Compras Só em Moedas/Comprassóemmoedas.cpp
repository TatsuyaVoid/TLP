#include<iostream>
#include<locale.h>
using namespace std;
int i;
void verificarQuantia(int moedas[], const int valoresMoedas[], int quantMoedas[]) {
    for ( i = 0; i < 8; i++) {
        quantMoedas[i] = moedas[i] * valoresMoedas[i];
    }
}
void vendaEfetuada(int euros, int centimos, int moedas[], const int valoresMoedas[], int troco[]) {
    int valorTotal = (euros * 100) + centimos, totalPago = 0, trocoT;
    for ( i = 0; i < 8; i++) {
        totalPago += moedas[i] * valoresMoedas[i];
    }
    if (totalPago >= valorTotal) {
        cout << "Venda efetuada com sucesso!\n";
        trocoT = totalPago - valorTotal;
        for ( i = 0; i < 8; i++) {
            troco[i] = trocoT / valoresMoedas[i];
            trocoT %= valoresMoedas[i];
            cout << troco[i] << " ";
        }
    }
    else {
        cout << "Não foi possível efetuar a venda.\n";
    }
}
void main() {
    setlocale(LC_ALL, "Portuguese");
    int euros, centimos, moedas[8], quantMoedas[8], troco[8];
    const int valoresMoedas[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
    cin >> euros;
    cin >> centimos;
    for ( i = 0; i < 8; i++) {
        cin >> moedas[i];
    }
    verificarQuantia(moedas, valoresMoedas, quantMoedas);
    vendaEfetuada(euros, centimos, moedas, valoresMoedas, troco);
}
