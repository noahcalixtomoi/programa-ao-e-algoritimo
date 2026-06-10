#include <iostream>
using namespace std;

// Função que analisa e imprime o estado de ordenação dos 5 números
void analisarOrdenacao(int arr[5]) {
    bool crescente = true;
    bool decrescente = true;

    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i+1]) crescente = false;
        if (arr[i] < arr[i+1]) decrescente = false;
    }

    if (crescente) cout << "Em ordem crescente" << endl;
    else if (decrescente) cout << "Em ordem decrescente" << endl;
    else cout << "Nao ordenados" << endl;
}

int main() {
    int numeros[5];
    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    analisarOrdenacao(numeros);
    return 0;
}
