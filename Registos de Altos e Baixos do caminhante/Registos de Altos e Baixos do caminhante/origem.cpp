#include<iostream>​​
#include<locale.h>
using namespace std;
void main(){
    setlocale(LC_ALL, "portuguese");
    int km[1000], m[1000], i, total = 0, calc, ck;
    cout << "====== Caminhadas ======\n";
    for (i = 0; i <= 1; i++){
        do {
            cout << "Quanto foi a " << i + 1 << "ª caminhada?\n";
            cout << "Quilometros: ";
            cin >> km[i];
            cout << "Metros: ";
            cin >> m[i];
        } while (m[i] > 999 || m[i] < 0);
        if (km[i] == 0 && m[i] == 0 && total > 1) {
            break;
        }
        else if (km[i] == 0 && m[i] == 0 && total <= 1) {
            cout << "Não caminhaste nada... \n";
            break;
        }
        else {
            total++;
        }
    }
    for (i = 1; i < total; i++) {
        calc = (km[i - 1] * 1000) + m[i - 1];
         ck = (km[i] * 1000) + m[i];
        if (calc > ck) {
            cout << "ABAIXOU " << ((calc - ck) / 1000) << "km e " << ((calc - ck) % 1000) << "m \n";
        }
        else if (calc < ck) {
            cout << "AUMENTOU " << ((ck - calc) / 1000) << "km  e " << ((ck - calc) % 1000) << "m \n";
        }
        else {
            cout << "PATAMAR \n";
        }
    }
}