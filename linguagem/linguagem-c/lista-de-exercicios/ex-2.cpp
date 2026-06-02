/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:ex-2.cpp
* Data: 19/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição:Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até 2^(esse número).
*/
#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    int i = 0;
    int resultado = 1; 
    
    while (i <= numero) {
        cout << "2 elevado a " << i << " = " << resultado << endl;
        
        resultado = resultado * 2; 
        i++; 
    }

    return 0;
}
