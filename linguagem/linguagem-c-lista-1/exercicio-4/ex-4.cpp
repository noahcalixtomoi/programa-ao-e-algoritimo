#include <iostream>
using namespace std;

int main() {
    int numero;
    int maior, menor;

    // Lendo o primeiro número para servir de referência inicial
    cout << "Digite o 1o numero: ";
    cin >> numero;
    
    maior = numero;
    menor = numero;

    // Lendo os 9 números restantes
    for (int i = 2; i <= 10; i++) {
        cout << "Digite o " << i << "o numero: ";
        cin >> numero;

        if (numero > maior) {
            maior = numero; // Atualiza o maior
        }
        if (numero < menor) {
            menor = numero; // Atualiza o menor
        }
    }

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;

    return 0;
}
