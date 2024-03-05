#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
int i, j;
int calcularMaxTentativas(string sequencia) {
    int maxTentativas = 0, tentativasAtuais = 0;
    for ( j = 0; j < sequencia.size(); j++) {
        if (sequencia[j] == '1'){
            tentativasAtuais++;
            maxTentativas = max(maxTentativas, tentativasAtuais);
        }
        else {
            tentativasAtuais = 0;
        }
    }
    return maxTentativas;
}
int verificarSucesso(int maxTentativas, int dificuldade){
    if (maxTentativas > dificuldade) {
        return true;
    }
    return false;
}
void main(){
    setlocale(LC_ALL, "Portuguese");
    string sequencia;
    int n, sucessoes = 0, dificuldade;
    cin >> sequencia >> n;
    for ( i = 0; i < n; i++) {
        cin >> dificuldade;
        int maxTentativas = calcularMaxTentativas(sequencia);
        if (verificarSucesso(maxTentativas, dificuldade)) {
            sucessoes++;
        }
    }
    cout << "Output: " << sucessoes << "\n";
}
