#include <iostream>
#include <cstdlib> // Necessário para rand() e srand()
#include <ctime>   // Necessário para time()

using namespace std;

int main() {
    // Semeia o gerador de números aleatórios com o tempo atual do sistema
    srand(time(0));
    
    // Gera um número secreto aleatório entre 1 e 100
    int numero_secreto = rand() % 100 + 1; 
    
    int palpite;
    int tentativas = 0;

    cout << "=== JOGO DA ADIVINHACAO ===" << endl;
    cout << "Eu pensei em um numero entre 1 e 100. Tente adivinhar!" << endl;

    // Laço continua até que o jogador acerte o número
    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++; // Incrementa a tentativa a cada palpite enviado

        if (palpite > numero_secreto) {
            cout << "Muito alto! Tente novamente." << endl;
        } else if (palpite < numero_secreto) {
            cout << "Muito baixo! Tente novamente." << endl;
        } else {
            cout << "\nParabens! Voce acertou o numero secreto!" << endl;
            cout << "Quantidade de palpites necessarios: " << tentativas << endl;
        }

    } while (palpite != numero_secreto);

    return 0;
}
