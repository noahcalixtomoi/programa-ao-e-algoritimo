#include <iostream>
#include <string>
#include <algorithm> // Para usar a função sort()
using namespace std;

int main() {
    string nomes[10];

    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> nomes[i];
    }

    // Ordena o vetor nativamente em ordem decrescente (usando reverse iterators)
    sort(nomes, nomes + 10, greater<string>());

    // O enunciado pede: "Ordenar em ordem decrescente e exibir em ordem crescente"
    // Se o vetor já está decrescente, para exibir em ordem crescente basta varrê-lo de trás para frente.
    cout << "\nExibindo em ordem crescente (lendo o vetor decrescente invertido):" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << nomes[i] << endl;
    }

    return 0;
}
