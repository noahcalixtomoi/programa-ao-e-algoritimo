#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisores = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Atenção lógica: Números menores que 2 não são primos
    if (numero < 2) {
        cout << "O numero " << numero << " nao eh primo." << endl;
    } else {
        // Laço para testar os divisores de 1 até o próprio número
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++; // Incrementa se a divisão for exata
            }
        }

        // Se só dividiu por 1 e por ele mesmo, é primo
        if (divisores == 2) {
            cout << "O numero " << numero << " eh primo." << endl;
        } else {
            cout << "O numero " << numero << " nao eh primo." << endl;
        }
    }

    return 0;
}
