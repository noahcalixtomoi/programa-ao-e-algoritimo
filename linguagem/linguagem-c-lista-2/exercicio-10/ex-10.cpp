#include <iostream>
#include <string>
using namespace std;

int contarVogais(string nome) {
    int qtd = 0;
    for (char c : nome) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            qtd++;
        }
    }
    return qtd;
}

int contarConsoantes(string nome) {
    int qtd = 0;
    for (char c : nome) {
        c = tolower(c);
        // Verifica se é uma letra válida e se não é vogal
        if (c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            qtd++;
        }
    }
    return qtd;
}

int main() {
    string nomeCompleto;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto); // Captura o nome completo incluindo os espaços

    cout << "Quantidade de vogais: " << contarVogais(nomeCompleto) << endl;
    cout << "Quantidade de consoantes: " << contarConsoantes(nomeCompleto) << endl;

    return 0;
}
