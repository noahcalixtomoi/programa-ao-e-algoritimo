#include <iostream>
using namespace std;

// Função que retorna verdadeiro se o número for ímpar
bool ehImpar(int num) {
    return num % 2 != 0;
}

int main() {
    int numero, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Percorre de 1 até o número digitado
    for (int i = 1; i <= numero; i++) {
        if (ehImpar(i)) {
            soma += i; // Acumula se for ímpar
        }
    }

    cout << "A soma dos numeros impares ate " << numero << " eh: " << soma << endl;
    return 0;
}
