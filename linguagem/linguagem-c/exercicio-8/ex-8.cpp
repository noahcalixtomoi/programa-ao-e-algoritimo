#include <iostream>
using namespace std;

int main() {
    int numero_limite;
    int soma_pares = 0;
    int soma_impares = 0;

    cout << "Digite um numero inteiro limite: ";
    cin >> numero_limite;

    // Laço de 0 até o número lido
    for (int i = 0; i <= numero_limite; i++) {
        if (i % 2 == 0) {
            soma_pares += i;   // Se for par (incluindo o 0)
        } else {
            soma_impares += i; // Se for ímpar
        }
    }

    cout << "Soma dos numeros pares: " << soma_pares << endl;
    cout << "Soma dos numeros impares: " << soma_impares << endl;

    return 0;
}
