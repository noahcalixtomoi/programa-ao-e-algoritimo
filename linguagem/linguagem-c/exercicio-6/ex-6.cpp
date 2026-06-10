#include <iostream>
using namespace std;

int main() {
    double numero;
    double soma = 0;
    double multiplicacao = 1; // Atenção lógica: deve começar com 1, nunca com 0

    // O laço continuará enquanto a soma for menor ou igual a 100
    while (soma <= 100) {
        cout << "Digite um numero: ";
        cin >> numero;

        soma += numero;
        multiplicacao *= numero; // O último número entra no cálculo conforme o enunciado
    }

    cout << "A soma ultrapassou 100 (Total: " << soma << ")." << endl;
    cout << "Resultado da multiplicacao de todos os numeros: " << multiplicacao << endl;

    return 0;
}
