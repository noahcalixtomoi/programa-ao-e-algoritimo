#include <iostream>
#include <string>
using namespace std;

int contarVogais(string nome) {
    int cont = 0;
    for (char letra : nome) {
        char c = tolower(letra);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }
    return cont;
}

int contarConsoantes(string nome) {
    int cont = 0;
    for (char letra : nome) {
        char c = tolower(letra);
        // Verifica se é uma letra válida e se não é uma vogal
        if (c >= 'a' && c <= 'z') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    string nomeCompleto;
    
    cout << "Digite o nome completo: ";
    cin.ignore(); // Limpa buffers residuais se necessário
    getline(cin, nomeCompleto); // Garante a leitura de toda a linha com espaços
    
    cout << "Quantidade de vogais: " << contarVogais(nomeCompleto) << endl;
    cout << "Quantidade de consoantes: " << contarConsoantes(nomeCompleto) << endl;
    
    return 0;
}
