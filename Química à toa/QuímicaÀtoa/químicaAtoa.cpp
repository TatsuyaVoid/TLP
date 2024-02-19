#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
    int i, k = 0;
    string formula;
    cout << "Escreve uma formula química: ";
    cin >> formula;
    for (i = 0; i < formula.size(); i++) {
        if (isupper(formula[i])) {
            if (k == 0) {
                cout << "1 ";
            }
            cout << " \n";
            k = 0;
        }
        if (isdigit(formula[i]) && k == 0) {
            cout << " ";
            k = 1;
        }
        cout << formula[i];
    }
}