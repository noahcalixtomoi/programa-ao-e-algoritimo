#include <iostream>
#include <string>
using namespace std;

// Altera a palavra original substituindo suas vogais por '*'
string ocultarVogais(string palavra) {
    for (int i = 0; i < palavra.length(); i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            palavra[i] = '*';
        }
    }
    return palavra;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    
    cout << "Palavra modificada: " << ocultarVogais(palavra) << endl;
    
    return 0;
}
