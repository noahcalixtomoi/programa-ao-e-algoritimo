#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    // Atenção lógica: a leitura, teste e soma precisam estar bem ordenados
    while (true) {
        cout << "Digite um numero (ou um negativo para sair): ";
        cin >> numero;

        if (numero < 0) {
            break; // Interrompe o laço imediatamente sem somar o negativo
        }

        soma += numero; // Acumula a soma
    }

    cout << "A soma dos numeros positivos digitados eh: " << soma << endl;

    return 0;
}
