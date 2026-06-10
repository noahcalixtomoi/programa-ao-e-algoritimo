#include <iostream>
#include <string>
using namespace std;

// Função que verifica se a palavra é igual de trás para frente
bool ehPalindromo(string palavra) {
    int tam = palavra.length();
    for (int i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - 1 - i]) {
            return false; // Se um caractere for diferente, não é palíndromo
        }
    }
    return true;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (ehPalindromo(palavra)) {
        cout << "A palavra '" << palavra << "' eh um palindromo." << endl;
    } else {
        cout << "A palavra '" << palavra << "' nao eh um palindromo." << endl;
    }

    return 0;
}
