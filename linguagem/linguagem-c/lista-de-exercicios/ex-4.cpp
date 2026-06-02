/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:ex-4.cpp
* Data: 19/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
*/
#include <iostream>

using namespace std;

int main() {
    int numero;
    int menor;
    int maior;

    cout << "Digite 10 numeros:" << endl;

    cin >> numero;
    menor = numero;
    maior = numero;

    for (int i = 1; i < 10; i++) {
        cin >> numero;

        if (numero < menor) {
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    cout << "menor = " << menor << endl;
    cout << "maior = " << maior << endl;

    return 0;
}
