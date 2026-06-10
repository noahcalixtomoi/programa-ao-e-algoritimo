#include <iostream>
using namespace std;

int main() {
    int vetor[20];
    int indiceNegativo = -1; // -1 indica que nenhum foi encontrado inicialmente

    cout << "Digite 20 numeros:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
    }

    // Procura o primeiro negativo
    for (int i = 0; i < 20; i++) {
        if (vetor[i] < 0) {
            indiceNegativo = i;
            break; // Interrompe no primeiro encontrado
        }
    }

    if (indiceNegativo != -1) {
        cout << "O primeiro numero negativo esta no indice: " << indiceNegativo << endl;
    } else {
        cout << "Nenhum numero negativo foi digitado." << endl;
    }

    return 0;
}
