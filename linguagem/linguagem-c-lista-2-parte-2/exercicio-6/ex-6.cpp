#include <iostream>
using namespace std;

int main() {
    int vetor[15];
    int indMenor = 0, indMaior = 0;

    cout << "Digite 15 numeros:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> vetor[i];
    }

    // Varre o vetor comparando os índices
    for (int i = 1; i < 15; i++) {
        if (vetor[i] < vetor[indMenor]) indMenor = i;
        if (vetor[i] > vetor[indMaior]) indMaior = i;
    }

    cout << "Indice do MENOR valor (" << vetor[indMenor] << "): " << indMenor << endl;
    cout << "Indice do MAIOR valor (" << vetor[indMaior] << "): " << indMaior << endl;

    return 0;
}
