#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int vetor[10];

    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    // Ordena o vetor de forma crescente
    sort(vetor, vetor + 10);

    // Após a ordenação:
    // vetor[0] é o menor
    // vetor[1] é o segundo menor
    // vetor[2] é o terceiro menor
    cout << "O terceiro menor valor digitado eh: " << vetor[2] << endl;

    return 0;
}
