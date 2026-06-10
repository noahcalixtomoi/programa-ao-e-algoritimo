#include <iostream>
using namespace std;

int main() {
    char letras[20];
    char busca;
    int contador = 0;

    cout << "Digite 20 letras (separadas por espaco):" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> letras[i];
    }

    cout << "Digite a letra que deseja buscar: ";
    cin >> busca;

    for (int i = 0; i < 20; i++) {
        if (letras[i] == busca) {
            contador++;
        }
    }

    cout << "A letra '" << busca << "' apareceu " << contador << " vezes." << endl;
    return 0;
}
