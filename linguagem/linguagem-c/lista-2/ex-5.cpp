#include <iostream>
#include <string>
using namespace std;

// Função que verifica se a string lida é igual de trás para frente
bool ehPalindromo(string palavra) {
    int inicio = 0;
    int fim = palavra.length() - 1;
    
    while (fim > inicio) {
        if (palavra[inicio] != palavra[fim]) {
            return false; // Se uma letra for diferente, não é palíndromo
        }
        inicio++;
        fim--;
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
