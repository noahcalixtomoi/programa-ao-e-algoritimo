#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[10];
    int pares[10], impares[10];
    int terceiroVetor[10];
    int qPares = 0, qImpares = 0;

    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            pares[qPares] = numeros[i];
            qPares++;
        } else {
            impares[qImpares] = numeros[i];
            qImpares++;
        }
    }

    // Ordena os vetores até onde foram preenchidos
    sort(pares, pares + qPares);
    sort(impares, impares + qImpares);

    // O enunciado pede: "Somar os elementos e armazenar em um terceiro vetor"
    // Como os tamanhos podem ser diferentes, somamos emparelhado até o limite do menor e mantemos os outros
    int maiorTamanho = max(qPares, qImpares);
    for (int i = 0; i < maiorTamanho; i++) {
        int valPar = (i < qPares) ? pares[i] : 0;
        int valImpar = (i < qImpares) ? impares[i] : 0;
        terceiroVetor[i] = valPar + valImpar;
    }

    // Exibição dos dados
    cout << "\n--- RESULTADO DOS VETORES ---" << endl;
    cout << "Vetor Pares Ordenado: ";
    for(int i=0; i<qPares; i++) cout << pares[i] << " ";
    cout << "\nVetor Impares Ordenado: ";
    for(int i=0; i<qImpares; i++) cout << impares[i] << " ";
    cout << "\nTerceiro Vetor (Somas): ";
    for(int i=0; i<maiorTamanho; i++) cout << terceiroVetor[i] << " ";
    cout << endl;

    return 0;
}
