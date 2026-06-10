#include <iostream>
using namespace std;

int main() {
    int limite_final, numero_base;

    cout << "Digite o numero limite final: ";
    cin >> limite_final;
    cout << "Digite o numero base dos multiplos: ";
    cin >> numero_base;

    cout << "Multiplos de " << numero_base << " entre 1 e " << limite_final << ":" << endl;

    // Laço percorre de 1 até o limite final (inclusive)
    for (int i = 1; i <= limite_final; i++) {
        if (i % numero_base == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
