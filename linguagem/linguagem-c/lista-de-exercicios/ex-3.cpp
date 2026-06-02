/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:ex-3.cpp
* Data: 19/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
*Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.
*/
#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite os numeros para somar (digite um negativo para parar):" << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break;
        }

        soma = soma + numero; 
    }

    cout << "A soma dos numeros validos é: " << soma << endl;

    return 0;
}
