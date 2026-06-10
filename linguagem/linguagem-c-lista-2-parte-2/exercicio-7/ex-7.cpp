#include <iostream>
using namespace std;

int main() {
    int v1[10], v2[10];
    int somaPositivos = 0;

    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> v1[i];
        v2[i] = v1[i] * -1; // Inverte o sinal
    }

    // Calcula a soma dos positivos de ambos os vetores
    for (int i = 0; i < 10; i++) {
        if (v1[i] > 0) somaPositivos += v1[i];
        if (v2[i] > 0) somaPositivos += v2[i];
    }

    cout << "Soma de todos os valores positivos dos dois vetores: " << somaPositivos << endl;
    return 0;
}
