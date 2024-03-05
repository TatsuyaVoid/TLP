#include<iostream>
#include<locale.h>
using namespace std;
void main() {
    setlocale(LC_ALL, "Portuguese");
    int euros, centimos, moedas[8], i, j;
    const int valoresMoedas[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
    cin >> euros;
    cin >> centimos;
    for ( i = 0; i <= 7; i++){
        moedas[i] = { 0 };
    }
    for ( i = 0; i < 8; i++) {
        cin >> moedas[i];
    }
    for ( i = 0; i <= 7; i++){
        for ( j = 0; j <= 7; j++){

        }
    }
}
