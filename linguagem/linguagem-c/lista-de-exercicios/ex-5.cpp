/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:ex-5.cpp
* Data: 19/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
*Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
*/
#include <iostream>

using namespace std;

int main() {
    int valor_final;
    int numero_base;

    cout << "Digite o valor de parada final: ";
    cin >> valor_final;

    cout << "Digite o numero base dos multiplos: ";
    cin >> numero_base;

    cout << "Os multiplos encontrados sao: " << endl;

    for (int i = 1; i <= valor_final; i++) {
        if (i % numero_base == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
