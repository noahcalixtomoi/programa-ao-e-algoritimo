#include <iostream>
#include <cmath> // Biblioteca para usar a função pow()
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro para o expoente maximo: ";
    cin >> numero;

    // Laço que vai de 0 até o número digitado
    for (int i = 0; i <= numero; i++) {
        // Calcula 2 elevado a i
        long long resultado = pow(2, i); 
        cout << "2^" << i << " = " << resultado << endl;
    }

    return 0;
}
