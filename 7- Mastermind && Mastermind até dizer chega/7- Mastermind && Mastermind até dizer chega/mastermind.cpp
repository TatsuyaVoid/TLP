#include<iostream>
#include<locale.h>
#include<string>
using namespace std;
void main() {
    setlocale(LC_ALL, "Portuguese");
    string nomeusuario;
    int i, j, acertos = 0, tentativas = 10, tabuleiro[5][10], escolha, palpite[5][10];
    srand(time(0));
    cout << "============ MASTERMIND ATÉ DIZER CHEGA ==============\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = rand() % 2 + 1;
        }
    }
    do {
        cout << "1 - Nome de usuário || 2 - Iniciar Jogo || 0 - Sair\n-----------------------------------------------------\n";
        cin >> escolha;
        switch (escolha) {
        case 1: {
            cout << "Qual o nome de usuário?\n";
            cin.ignore();
            getline(cin, nomeusuario);
            cout << "Olá " << nomeusuario << " || Bem-Vind@ ao Mastermind!\n";
            break;
        }
        case 2: {
            cout << "_-_-_-_ Inicio de Jogo _-_-_-_\n";
            for (i = 0; i < 5; i++) {
                if (tentativas == 0) {
                    cout << "Fim de jogo, as tentativas chegaram a 0. " << nomeusuario << " deseja recomeçar?\n";
                    break;
                }
                for (j = 0; j < 10; j++) {
                    cout << "Diga um um número (1 ou 2): ";
                    cin >> palpite[i][j];
                    tentativas--;
                    if (palpite[i][j] == tabuleiro[i][j]) {
                        acertos++;
                    }
                }
            }
            cout << "No total, acertaste " << acertos << " vezes";
            for (i = 0; i < 5; i++) {
                cout << "\n";
                for (j = 0; j < 10; j++) {
                    cout << " " << tabuleiro[i][j] << " ";
                }
            }
            cout << "\n";
            break;
        }
        case 0: {
            cout << "Encerrando o programa....\n";
            break;
        }
        default: {
            cout << "Número Inválido. Tente Novamente\n";}
        }
    } while (escolha != 0);
}
