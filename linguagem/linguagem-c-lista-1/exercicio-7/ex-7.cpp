#include <iostream>
using namespace std;

int main() {
    int qtd_pessoas;
    double altura, soma_alturas = 0;

    cout << "Digite a quantidade de pessoas no grupo: ";
    cin >> qtd_pessoas;

    // Evita erro de divisão por zero caso o usuário digite 0 ou menos
    if (qtd_pessoas <= 0) {
        cout << "Quantidade invalida." << endl;
        return 0;
    }

    for (int i = 1; i <= qtd_pessoas; i++) {
        cout << "Digite a altura da " << i << "a pessoa (em metros): ";
        cin >> altura;
        soma_alturas += altura; // Acumula as alturas
    }

    // Calcula a média usando variáveis do tipo real (double)
    double media = soma_alturas / qtd_pessoas;

    cout << "A altura media do grupo eh: " << media << " metros." << endl;

    return 0;
}
